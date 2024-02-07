#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *array;
    int top;
    int max_size;
} Stack;

// Função para criar uma nova pilha
Stack* createStack(int max_size) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->array = (int*)malloc(max_size * sizeof(int));
    stack->top = -1;
    stack->max_size = max_size;
    return stack;
}

// Função para verificar se a pilha está cheia
int isFull(Stack* stack) {
    return stack->top == stack->max_size - 1;
}

// Função para verificar se a pilha está vazia
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Função para inserir um elemento na pilha
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("A pilha esta cheia. Nao foi possivel inserir o elemento.\n");
        return;
    }
    stack->array[++stack->top] = value;
}

// Função para remover um elemento da pilha
void pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("A pilha esta vazia. Nao foi possivel remover o elemento.\n");
        return;
    }
    printf("Elemento removido: %d\n", stack->array[stack->top--]);
}

// Função para imprimir os elementos da pilha
void printStack(Stack* stack) {
    printf("Elementos na pilha:\n");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->array[i]);
    }
    printf("\n");
}

int main() {
    int maxSize;
    printf("Digite o tamanho maximo da pilha: ");
    scanf("%d", &maxSize);

    // Criar a pilha com o tamanho máximo especificado
    Stack* stack = createStack(maxSize);

    printf("Digite os elementos para inserir na pilha (total de %d elementos):\n", maxSize - 1);
    for (int i = 0; i < maxSize - 1; i++) {
        int element;
        scanf("%d", &element);
        push(stack, element);
    }

    printf("Elementos na pilha inicial:\n");
    printStack(stack);

    printf("A pilha esta %s.\n", isEmpty(stack) ? "vazia" : "sendo utilizada");
    printf("A pilha esta %s.\n", isFull(stack) ? "cheia" : "com espaco livre");

    // Inserir um elemento na pilha
    printf("Inserindo um elemento na pilha...\n");
    push(stack, 42);
    printStack(stack);

    // Remover um elemento da pilha
    printf("Removendo um elemento da pilha...\n");
    pop(stack);
    printStack(stack);

    // Liberar a memória alocada para a pilha
    free(stack->array);
    free(stack);

    return 0;
}
