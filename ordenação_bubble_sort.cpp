#include <iostream>
using namespace std;

int main() {
    int numeros[] = {10, 4,7, 121, 80, 32, 1, 0, 4, 12,46,66,57};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Array antes da ordenação: ";
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }

    for (int i = 0; i < tamanho; i++) {
        for (int p = 0; p < tamanho - i - 1; p++) {
            if (numeros[p] > numeros[p + 1]) {
                int temp = numeros[p];
                numeros[p] = numeros[p + 1];
                numeros[p + 1] = temp;
            }
        }
    }

    cout << "\nArray ordenado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
