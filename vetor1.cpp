// VETORES

#include <iostream>
using namespace std;

int main() {

    int vet[6]; //Define um array de 6

    cout << "Digite 6 valores: " << endl;
    for (int i=0; i<6; i++) {    //entra dos 6 valores
        cin >> vet[i];
    }

    for (int i=0; i<6; i++) {      // imrprimir
        cout << "Valores: " << vet[i] << endl;
    }


    return 0;
}