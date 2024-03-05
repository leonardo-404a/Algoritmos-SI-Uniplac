#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float custoFabrica, custoFinal;
    float taxaRevendedor = 10, impostos = 45;

    cout << "Insira o custo de fábrica do carro: ";
    cin >> custoFabrica;

    custoFinal = custoFabrica + (custoFabrica * taxaRevendedor / 100) + (custoFabrica * impostos / 100);

    cout << "O custo final do carro é: " << custoFinal << endl;

    getch();
    return 0;
}
