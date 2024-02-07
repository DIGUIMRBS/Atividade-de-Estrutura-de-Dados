#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3;
    cout << "Digite tres numeros reais diferentes: ";
    cin >> num1 >> num2 >> num3;
    double max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
    cout << "O maior numero e " << max << endl;
    return 0;
}
