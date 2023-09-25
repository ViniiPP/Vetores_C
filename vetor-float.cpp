// EX DE VETOR, somando float

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float vet[]{9.50, 3.120, 4.54, 6.39, 7.089}; // ja foi passado os valores total= 30.6
    float soma = 0;

    for (int i = 0; i < 5; i++)
    { // i<5  5= número de dados dentro do vetor i= linha
        soma = soma + vet[i];
        // soma=+ vet[i];
    }
    cout << "Resultado da soma: " << fixed << setprecision(1) << soma << endl;

    return 0;
}