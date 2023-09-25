// Vetor q vai de 0 a 99, dividindo os valores pela metade até zerar

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double x;
    cin >> x;
    
    double N[100]; // tamanho 100 para armazenar os valores das respostas
    N[0] = x;     // Inicia a primeira resposta do vetor com o valor lido X, "cin >> x" "ex: N[0]: 15...."

    for (int i=1; i<100; i++){ //começa em 1 e vai até 99
        N[i] = N[i-1] / 2;   // N[i] = N[i-1]: ele vai pra posição "1" do vetor, divide, e dps vai pra linha de baixo //RESPOSTA
    }

    for (int i=0; i<100; i++) {
        cout << fixed << setprecision(4) << "N[" << i << "] = " << N[i] << endl;
    
    }

    return 0;
}