#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
  int data;
  Node *next;
};

class Stack {
private:
  Node *top;
  int size;

public:
  Stack(int size) {
    this->size = size;
    top = NULL;
  }

  bool isEmpty() {
    return top == NULL;
  }

  bool isFull() {
    return size == 0;
  }

  void push(int data) {
    if (isFull()) {
      cout << "Stack is full" << endl;
      return;
    }

    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
    size--;
  }

  int pop() {
    if (isEmpty()) {
      cout << "Stack is empty" << endl;
      return -1;
    }

    int data = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    size++;
    return data;
  }

  void printStack() {
    Node *temp = top;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main() {
  int size;
  cout << "Informe o tamanho máximo da pilha: ";
  cin >> size;

  int elements;
  cout << "Informe a quantidade de elementos da pilha: ";
  cin >> elements;

  Stack stack(size);

  for (int i = 0; i < elements; i++) {
    int data;
    cout << "Informe o elemento " << i + 1 << ": ";
    cin >> data;
    stack.push(data);
  }

  cout << "Elementos da pilha: ";
  stack.printStack();

  cout << "A pilha está vazia? " << (stack.isEmpty() ? "Sim" : "Não") << endl;

  cout << "A pilha está cheia? " << (stack.isFull() ? "Sim" : "Não") << endl;

  return 0;
}
