// Mostra a menor posição do vetor, e sua posição

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Informe o número de vetores: ";
    cin >> n; //numero de vetores
    int X[n];

    for (int i=0; i<n; i++) {  //Para armazenar as infs  (i<n): enquanto i for menor que o número de vetores escolhido, ele fica pedindo.
        cin >> X[i];
    }

    int menorV = X[0]; // menor valor
    int posMenor = 0;  // posição do menor
    int maiorV = X[0]; // maior valor
    int posMaior = 0;  // posição do maior

    for (int i = 1; i < n; i++) { //menor
        if (X[i] < menorV) {
            menorV = X[i];
            posMenor = i;
        }
        if (X[i] > maiorV) { //maior
            maiorV = X[i];
            posMaior = i;
        }
    }

    cout << "Menor valor: " << menorV << endl;
    cout << "Posicao do menor valor: " << posMenor << endl;

    cout << "Maior valor: " << maiorV << endl;
    cout << "Posicao do maior valor: " << posMaior << endl;

    return 0;
}