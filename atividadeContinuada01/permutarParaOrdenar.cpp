#include <iostream>

using namespace std;

void ordenar(int vetor[], int tamanho) {
    for(int i = 0; i < tamanho; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < tamanho; ++j) {
            if (vetor[j] < vetor[minIndex]) {
                minIndex = j;
            }
        }
        int temp = vetor[i];
        vetor[i] = vetor[minIndex];
        vetor[minIndex] = temp;
    }
}

int main() {
    int vetor[1000];
    int tamanho = 1000;
    for(int i = 0; i < 1000; i++) {
        vetor[i] = 1000 - i;
    }

    ordenar(vetor, tamanho);

    for(int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
}