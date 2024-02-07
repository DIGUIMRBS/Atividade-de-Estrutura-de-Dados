#include <iostream>
using namespace std;

int main()
{
    int n, pos = 0, neg = 0;
    cout << "Digite a quantidade de elementos desejado: ";
    cin >> n;
    double arr[n];
    cout << "Digite " << n << " numeros separando-os por um espaço entre eles: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
    }
    cout << "O numero de elementos positivos digitados e: " << pos << endl;
    cout << "O numero de elementos negativos digitados e: " << neg << endl;
    return 0;
}
