#include <iostream>
using namespace std;

int main()
{
    string nomeVendedor;
    int qtdCarrosVendidos;
    float valorTotalVendas, salarioTotal;

    cout << "Digite o nome do vendedor: ";
    cin >> nomeVendedor;

    cout << "Digite a quantidade de carros vendidos: ";
    cin >> qtdCarrosVendidos;

    cout << "Digite o valor total das vendas: ";
    cin >> valorTotalVendas;

    salarioTotal = 350 + (50 * qtdCarrosVendidos) + (0.05 * valorTotalVendas);

    cout << "Nome do vendedor: " << nomeVendedor << endl;
    cout << "Quantidade de carros vendidos: " << qtdCarrosVendidos << endl;
    cout << "Valor total das vendas: " << valorTotalVendas << endl;
    cout << "Salário total do vendedor: " << salarioTotal << endl;

    return 0;
}