#include <iostream>

class Pilha {
private:
    int *dados;
    int topo;
    int tamanhoMaximo;

public:
    Pilha(int tamanhoMax) {
        tamanhoMaximo = tamanhoMax;
        dados = new int[tamanhoMaximo];
        topo = -1;
    }

    ~Pilha() {
        delete[] dados;
    }

    bool estaCheia() {
        return topo == tamanhoMaximo - 1;
    }

    bool estaVazia() {
        return topo == -1;
    }

    void inserir(int elemento) {
        if (!estaCheia()) {
            topo++;
            dados[topo] = elemento;
        } else {
            std::cout << "A pilha est� cheia. N�o � poss�vel inserir mais elementos.\n";
        }
    }

    void remover() {
        if (!estaVazia()) {
            topo--;
        } else {
            std::cout << "A pilha est� vazia. N�o h� elementos para remover.\n";
        }
    }

    void mostrarPilha() {
        std::cout << "Elementos na pilha: ";
        for (int i = 0; i <= topo; i++) {
            std::cout << dados[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    int tamanhoMaximo;
    std::cout << "Digite o tamanho m�ximo da pilha: ";
    std::cin >> tamanhoMaximo;

    Pilha pilha(tamanhoMaximo);

    std::cout << "Digite os " << tamanhoMaximo - 1 << " elementos da pilha:\n";
    for (int i = 0; i < tamanhoMaximo - 1; i++) {
        int elemento;
        std::cin >> elemento;
        pilha.inserir(elemento);
    }

    std::cout << "Elementos da pilha: ";
    pilha.mostrarPilha();

    std::cout << "A pilha est� vazia? " << (pilha.estaVazia() ? "Sim" : "N�o") << "\n";
    std::cout << "A pilha est� cheia? " << (pilha.estaCheia() ? "Sim" : "N�o") << "\n";

    pilha.inserir(42);  // Inserir um elemento
    std::cout << "Elementos da pilha ap�s inser��o: ";
    pilha.mostrarPilha();

    pilha.remover();  // Remover um elemento
    std::cout << "Elementos da pilha ap�s remo��o: ";
    pilha.mostrarPilha();

    return 0;
}
