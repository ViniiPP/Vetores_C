// EX DOS VETORES

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int vet[n];

    cout << "Digite " << n << " Valores" << endl;
    for (int i=0; i<n; i++) {  // entrada de dados
        cin >> vet[i];
    }

    cout << "Normal" << endl;
    for (int i=0; i<n; i++) {
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    cout << "Inversa" << endl;
    for (int i=n-1; i>=0; i--) { //USAR -1
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    return 0;
}