// VETORES outra maneira

#include <iostream>
using namespace std;

int main() {

    int vet[6]; //Define um array de 6

    cout << "Digite 6 valores: " << endl;
    for (int i=0; i<6; i++) {
        cin >> vet[i];   //entra dos 6 valores
    }

    for (int i=0; i<6; i++) { // print dos valores
        cout << "Vet[" << i << "]= " << vet[i] << endl;  // aq vai aparecer o número do vetor, diferente da questão 1

    }

    return 0;
}