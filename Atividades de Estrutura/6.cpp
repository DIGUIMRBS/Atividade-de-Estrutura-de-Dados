#include <iostream>
using namespace std;

int main()
{
    int n, pos = 0, neg = 0;
    cout << "Digite a quantidade de elementos desejado: ";
    cin >> n;
    double arr[n];
    cout << "Digite " << n << " numeros separando-os por um espa�o entre eles: ";
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
    cout << "A porcentagem de elementos positivos digitados e de: " << (pos * 100.0) / n << "%" << endl;
    cout << "A procentagem de elementos negativos digitados e de: " << (neg * 100.0) / n << "%" << endl;
    return 0;
}
