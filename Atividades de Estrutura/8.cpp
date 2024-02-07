#include <iostream>
using namespace std;

int main()
{
    double num;
    char resp = 's';
    while (resp == 's' || resp == 'S')
    {
        cout << "Deseja calcular o valor absoluto de um numero? (s/n): ";
        cin >> resp;
        if (resp == 's' || resp == 'S')
        {
            cout << "Digite um numero real: ";
            cin >> num;
            cout << "O valor absoluto de " << num << " e: " << abs(num) << endl;
        }
    }
    return 0;
}
