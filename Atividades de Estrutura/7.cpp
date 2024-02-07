#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Digite a quantidade de elementos desejado: ";
    cin >> n;
    int arr[n];
    cout << "Digite " << n << " numeros separando-os por um espaço entre eles: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 2; i++)
        if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])
            count++;
    cout << "O número de triplas com elementos iguas e de: " << count << endl;
    return 0;
}
