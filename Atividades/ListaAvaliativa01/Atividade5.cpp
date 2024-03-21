#include <iostream>
using namespace std;

int main()
{
    string nomeFuncionario;
    float salarioBruto, salarioLiquido, descontoPrevidencia, descontoImpostoRenda;

    cout << "Digite o nome do funcionário: ";
    cin >> nomeFuncionario;

    cout << "Digite o salário bruto do funcionário: ";
    cin >> salarioBruto;

    descontoPrevidencia = salarioBruto * 0.10;
    descontoImpostoRenda = (salarioBruto - descontoPrevidencia) * 0.25;
    salarioLiquido = salarioBruto - descontoPrevidencia - descontoImpostoRenda;

    cout << "Nome do funcionário: " << nomeFuncionario << endl;
    cout << "Salário bruto do funcionário: " << salarioBruto << endl;
    cout << "Salário líquido do funcionário: " << salarioLiquido << endl;
    cout << "Desconto para a previdência: " << descontoPrevidencia << endl;
    cout << "Desconto para o imposto de renda: " << descontoImpostoRenda << endl;

    return 0;
}
