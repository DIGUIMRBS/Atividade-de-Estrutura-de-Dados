#include <stdio.h>

typedef struct {
    int chave;
} Elemento;

void descer(Elemento T[], int i, int n);

void descer(Elemento T[], int i, int n) {
    int j = 2 * i;
    while (j <= n) {
        if (j < n && T[j + 1].chave > T[j].chave) {
            j = j + 1;
        }
        if (T[i].chave < T[j].chave) {
            Elemento temp = T[i];
            T[i] = T[j];
            T[j] = temp;
            i = j;
            j = 2 * i;
        } else {
            break;
        }
    }
}

int main() {
    // Defina o HEAP original
    Elemento T[] = {{0}, {92}, {85}, {90}, {47}, {31}, {34}, {20}, {40}, {46}};
    int tamanho_heap = 9; // Tamanho atual do heap

    // Altere a prioridade do nó 2 para 15
    T[2].chave = 15;

    // Aplique a função descer para ajustar o heap
    descer(T, 2, tamanho_heap);

    // Imprima o heap resultante
    for (int i = 1; i <= tamanho_heap; i++) {
        printf("%d ", T[i].chave);
    }

    return 0;
}
