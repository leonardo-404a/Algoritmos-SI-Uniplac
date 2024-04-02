#include <iostream>
#include <string>
using namespace std;

int main()
{
    int matricula, m3Consumidos;
    float valorConsumo, valorSaneamento, valorPIS, valorCOFINS, valorTotal;
    string classe;

    cout << "Digite a matrícula do consumidor: ";
    cin >> matricula;
    cout << "Digite a quantidade de m3 consumidos: ";
    cin >> m3Consumidos;
    cout << "Digite a classe do consumidor (RESIDENCIAL, COMERCIAL ou INDUSTRIAL): ";
    cin >> classe;

    if (m3Consumidos <= 10)
    {
        valorConsumo = m3Consumidos * 2.99;
    }
    else if (m3Consumidos > 10 && m3Consumidos <= 25)
    {
        valorConsumo = 10 * 2.99 + (m3Consumidos - 10) * 5.48;
    }
    else if (m3Consumidos > 25 && m3Consumidos <= 50)
    {
        valorConsumo = 10 * 2.99 + 15 * 5.48 + (m3Consumidos - 25) * 7.69;
    }
    else
    {
        valorConsumo = 10 * 2.99 + 15 * 5.48 + 25 * 7.69 + (m3Consumidos - 50) * 9.22;
    }

    if (classe == "RESIDENCIAL")
    {
        valorSaneamento = 5.00;
    }
    else if (classe == "COMERCIAL")
    {
        valorSaneamento = 10.00;
    }
    else if (classe == "INDUSTRIAL")
    {
        valorSaneamento = 15.00;
    }

    valorPIS = valorConsumo * 0.0065;
    valorCOFINS = valorConsumo * 0.03;

    valorTotal = valorConsumo + valorSaneamento + valorPIS + valorCOFINS;

    cout << "O valor a ser pago de saneamento básico é R$ " << valorSaneamento << endl;
    cout << "O valor do PIS é R$ " << valorPIS << endl;
    cout << "O valor do COFINS é R$ " << valorCOFINS << endl;
    cout << "O valor total da conta é R$ " << valorTotal << endl;

    return 0;
}
