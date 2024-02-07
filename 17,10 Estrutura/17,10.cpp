#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void createQueue() {
    front = rear = -1;
}

int isEmpty() {
    if (front == -1 || front > rear) {
        return 1;
    } else {
        return 0;
    }
}

int isFull() {
    if (rear == MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(int data) {
    if (isFull()) {
        printf("A fila ja esta cheia, nao e possivel adicionar mais nenhum elemento.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
        printf("%d foi adicionado com sucesso a fila.\n", data);
    }
}

int dequeue() {
    int data;
    if (isEmpty()) {
        printf("A fila esta vazia, e possivel adicionar elementos a fila.\n");
        return (-1);
    } else {
        data = queue[front];
        front++;
        if (front > rear) {
            front = rear = -1;
        }
        printf("%d foi removido da fila.\n", data);
        return (data);
    }
}

void display() {
    int i;
    if (isEmpty()) {
        printf("A fila esta vazia.\n");
    } else {
        printf("Os elementos da fila sao:\n");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int opcao, data;

    createQueue();

    do {
        printf("\nMenu:\n");
        printf("1. Enfileirar\n");
        printf("2. Desenfileirar\n");
        printf("3. Mostrar a fila\n");
        printf("4. Sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o elemento desejado que sera emfileirado: ");
                scanf("%d", &data);
                enqueue(data);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Opção invalida, por favor tente novamente.\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
