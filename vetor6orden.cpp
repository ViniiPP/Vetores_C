// ORDENAÇÃO DE VETORES

#include <iostream>
using namespace std;

// Função para trocar dois elementos em um vetor
void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Função para particionar o vetor e escolher um pivô
int particionar(int arr[], int baixo, int alto) {
    int pivô = arr[alto]; // Escolha o elemento mais alto como pivô
    int i = (baixo - 1);

    for (int j = baixo; j <= alto - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivô, troque arr[i] e arr[j]
        if (arr[j] <= pivô) {
            i++;
            trocar(arr[i], arr[j]);
        }
    }

    // Troque arr[i + 1] e arr[alto] (ou seja, o pivô)
    trocar(arr[i + 1], arr[alto]);
    return (i + 1);
}

// Função QuickSort
void quickSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        // Encontre o índice de particionamento, arr[pIndex] está agora no lugar certo
        int pIndex = particionar(arr, baixo, alto);

        // Classifique os elementos antes e depois do índice de particionamento
        quickSort(arr, baixo, pIndex - 1);
        quickSort(arr, pIndex + 1, alto);
    }
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int vet[n];

    cout << "Digite " << n << " Valores" << endl;
    for (int i = 0; i < n; i++) {  // entrada de dados
        cin >> vet[i];
    }

    // Chame a função QuickSort para ordenar o vetor
    quickSort(vet, 0, n - 1);

    cout << "Ordenado em Ordem Crescente (Quicksort)" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Vet[" << i << "]= " << vet[i] << endl;
    }

    return 0;
}
