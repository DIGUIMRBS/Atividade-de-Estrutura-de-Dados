#include <iostream>
using namespace std;

int main()
{
    int dia1, mes1, ano1, dia2, mes2, ano2;
    cout << "Por favor digite a primeira data na forma XX  XX  XXXX: ";
    cin >> dia1 >> mes1 >> ano1;
    cout << "Por favor digite a segunda data na forma XX  XX  XXXX: ";
    cin >> dia2 >> mes2 >> ano2;
    if (ano2 > ano1 || (ano2 == ano1 && mes2 > mes1) || (ano2 == ano1 && mes2 == mes1 && dia2 > dia1))
        cout << "A segunda data e maior cronologicamente." << endl;
    else if (ano1 > ano2 || (ano1 == ano2 && mes1 > mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 > dia2))
        cout << "A primeira data e maior cronologicamente." << endl;
    else
        cout << "As datas são exatamente iguais." << endl;
    return 0;
}
