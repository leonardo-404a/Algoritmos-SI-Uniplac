#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numConta;
    float saldo, valorOperacao;
    string tipoOperacao;

    cout << "Digite o número da conta: ";
    cin >> numConta;
    cout << "Digite o saldo da conta: ";
    cin >> saldo;
    cout << "Digite o tipo de operação (depósito ou retirada): ";
    cin >> tipoOperacao;
    cout << "Digite o valor da operação: ";
    cin >> valorOperacao;

    if (tipoOperacao == "depósito")
    {
        saldo += valorOperacao;
    }
    else if (tipoOperacao == "retirada")
    {
        saldo -= valorOperacao;
    }

    if (saldo < 0)
    {
        cout << "Conta estourada." << endl;
    }

    cout << "O novo saldo da conta é: " << saldo << endl;

    return 0;
}
