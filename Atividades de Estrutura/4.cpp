#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout << "Digite um numero inteiro que seja maior ou igual a zero: ";
    cin >> n;

    while (sum < n)
    {
        sum += i;
        i += 2;
    }
    if (sum == n)
        cout << n << " Este numero e um quadrado perfeito." << endl;
    else
        cout << n << " Este numero nao e um quadrado perfeito." << endl;
    return 0;
}
