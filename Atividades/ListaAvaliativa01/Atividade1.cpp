
#include <iostream>
using namespace std;

int main()
{
    float cotacaoDolar, valorDolar, valorReal;

    cout << "Digite a cotação do dólar: ";
    cin >> cotacaoDolar;

    cout << "Digite o valor em dólares: ";
    cin >> valorDolar;

    valorReal = cotacaoDolar * valorDolar;

    cout << "O valor em reais é: " << valorReal << endl;

    return 0;
}