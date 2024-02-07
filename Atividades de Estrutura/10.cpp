#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Digite a quantidade de linhas e a quantidade de colunas que tera a matriz separados por espaco: ";
    cin >> n;
    double matriz[n][n];
    cout << "Digite os elementos da matriz separado as colunas com espaço e as linhas com enter e deixando um espaco em cada elemento digitado: " << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matriz[i][j];
    double maior = matriz[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
    cout << "O maior elemento da matriz e: " << maior << endl;
    return 0;
}
