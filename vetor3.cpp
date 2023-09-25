// VETORES ao contrário

#include <iostream>
using namespace std;

int main() {

    int vet[6]; //Define um array de 6

    cout << "Digite 6 valores: " << endl;
    for (int i=0; i<6; i++) {  // entrada de dados, começa de 0 e vai até 5, totalizando 6 valores de entrada
        cin >> vet[i];
    }

    for (int i=5; i>=0; i--) {  // i-- inverte
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    return 0;
}