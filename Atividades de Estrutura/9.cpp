#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Digite a quantidade de asteriscos desejada: ";
    cin >> n;
    cout << "Fazendo com o comando for: ";
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
    cout << "Agora com a utilização do comando while: ";
    int i = 0;
    while (i < n)
    {
        cout << "*";
        i++;
    }
    cout << endl;
    return 0;
}
