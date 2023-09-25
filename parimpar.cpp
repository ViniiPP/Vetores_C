// PAR E IMPAR

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int vet[n];
    int pares = 0; // Variável para contar números pares
    int impares = 0; // Variável para contar números ímpares

    cout << "Digite " << n << " valores: " << endl;
    for (int i = 0; i < n; i++) {  // entrada de dados
        cin >> vet[i];

        // Verifica se o número é par ou ímpar
        if (vet[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Lista de números digitados:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    cout << "Números pares: " << pares << " - ";
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 == 0) {
            cout << vet[i] << " ";
        }
    }
    cout << endl;

    cout << "Números ímpares: " << impares << " - ";
    for (int i = 0; i < n; i++) {
        if (vet[i] % 2 != 0) {
            cout << vet[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
