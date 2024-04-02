
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numDiarias;
    float valorDiaria, valorConta;
    string nomeCliente;

    cout << "Digite o nome do cliente: ";
    cin >> nomeCliente;
    cout << "Digite a quantidade de diárias: ";
    cin >> numDiarias;

    if (numDiarias > 5)
    {
        valorDiaria = 5.50;
    }
    else if (numDiarias == 5)
    {
        valorDiaria = 7.00;
    }
    else if (numDiarias < 5)
    {
        valorDiaria = 9.00;
    }

    valorConta = numDiarias * valorDiaria;

    cout << "O cliente " << nomeCliente << " deve pagar R$ " << valorConta << " pela estadia." << endl;

    return 0;
}
