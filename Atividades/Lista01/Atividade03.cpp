#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valorPecas, comissao;
    string nomeVendedor;
    int quantidadePecas;

    cout << "Insira o nome do vendedor: ";
    cin >> nomeVendedor;
    cout << "Insira o valor unitário das peças vendidas: ";
    cin >> valorPecas;
    cout << "Insira a quantidade de peças vendidas: ";
    cin >> quantidadePecas;

    comissao = valorPecas * quantidadePecas * 0.05;
    cout << "A comissão do vendedor" << nomeVendedor << "é: " << comissao << endl;

    getch();
    return 0;
}