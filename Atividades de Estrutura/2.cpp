#include <iostream>
using namespace std;

int main()
{
    int n, i = 2, count = 0;
    cout << "Digite um numero inteiro que nao seja negativo e acima de 0: ";
    cin >> n;
    while (count < n)
    {
        bool is_prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            cout << i << " ";
            count++;
        }
        i++;
    }
    return 0;
}
