#include <stdio.h>

typedef struct {
    int chave;
} Elemento;
void subir(Elemento T[], int i, int tamanho_heap);
void descer(Elemento T[], int i, int tamanho_heap);
void subir(Elemento T[], int i, int tamanho_heap) {
    int j = i / 2;
    while (j >= 1 && T[i].chave > T[j].chave) {
        Elemento temp = T[i];
        T[i] = T[j];
        T[j] = temp;
        i = j;
        j = i / 2;
    }
}
void descer(Elemento T[], int i, int tamanho_heap) {
    int maior = i;
    int filho_esquerda = 2 * i;
    int filho_direita = 2 * i + 1;
    if (filho_esquerda <= tamanho_heap && T[filho_esquerda].chave > T[maior].chave) {
        maior = filho_esquerda;
    }
    if (filho_direita <= tamanho_heap && T[filho_direita].chave > T[maior].chave) {
        maior = filho_direita;
    }
    if (maior != i) {
        Elemento temp = T[i];
        T[i] = T[maior];
        T[maior] = temp;
        descer(T, maior, tamanho_heap);
    }
}
int main() {
    Elemento T[] = {{0}, {92}, {85}, {90}, {47}, {31}, {34}, {20}, {40}, {46}};
    int tamanho_heap = 9;
    T[5].chave = 93;
    subir(T, 5, tamanho_heap);
    for (int i = 1; i <= tamanho_heap; i++) {
        printf("%d ", T[i].chave);
    }
    return 0;
}
