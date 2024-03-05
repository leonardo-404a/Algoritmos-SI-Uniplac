#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valorPrestacao, totalPago, saldoDevedor;
    int numeroTotalPrestacoes, quantidadePrestacoesPagas;

    cout << "Insira o valor da prestação: ";
    cin >> valorPrestacao;

    cout << "Insira o número total de prestações: ";
    cin >> numeroTotalPrestacoes;

    cout << "Insira a quantidade de prestações pagas: ";
    cin >> quantidadePrestacoesPagas;

    totalPago = valorPrestacao * quantidadePrestacoesPagas;
    saldoDevedor = valorPrestacao * (numeroTotalPrestacoes - quantidadePrestacoesPagas);

    cout << "O total pago pelo consorciado é: " << totalPago << endl;
    cout << "O saldo devedor é: " << saldoDevedor << endl;

    getch();
    return 0;
}