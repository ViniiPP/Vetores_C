// VETORES constante reverso

#include <iostream>
using namespace std;

int main() {

    const int N = 5;
    int vet[N]; //Define um array de N ^ inteiros

    cout << "Digite " << N << " valores: " << endl;
    for (int i=0; i<N; i++) {  // entrada de dados
        cin >> vet[i];
    }

    for (int i=N-1; i>=0; i--) { //USAR -1
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    return 0;
}