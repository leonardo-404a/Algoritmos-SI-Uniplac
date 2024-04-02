#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numReserva, numHospedes, tipoQuarto, numDiarias, numMassagens;
    float valorFrigobar, valorBar, valorDiaria, valorMassagem, valorConta, valorISS;
    string nomeReserva;

    cout << "Digite o número da reserva: ";
    cin >> numReserva;
    cout << "Digite o nome do responsável pela reserva: ";
    cin >> nomeReserva;
    cout << "Digite a quantidade de hóspedes: ";
    cin >> numHospedes;
    cout << "Digite o tipo de quarto: ";
    cin >> tipoQuarto;
    cout << "Digite a quantidade de diárias: ";
    cin >> numDiarias;
    cout << "Digite o valor consumido no frigobar: ";
    cin >> valorFrigobar;
    cout << "Digite o número de serviços de massagens utilizadas pelo cliente: ";
    cin >> numMassagens;
    cout << "Digite o valor do consumo de bar: ";
    cin >> valorBar;

    switch (tipoQuarto)
    {
        case 1:
            valorDiaria = 50;
            break;
        case 2:
            valorDiaria = 80;
            break;
        case 3:
            valorDiaria = 150;
            break;
        default:
            cout << "Tipo de quarto inválido." << endl;
            return 1;
    }

    if (numHospedes == 1)
    {
        valorDiaria += 0;
    }
    else if (numHospedes == 2 || numHospedes == 3)
    {
        valorDiaria += 20;
    }
    else if (numHospedes >= 5)
    {
        valorDiaria += 40;
    }

    if (numMassagens <= 3)
    {
        valorMassagem = numMassagens * 80;
    }
    else
    {
        valorMassagem = numMassagens * 65;
    }

    valorFrigobar += 12;
    valorBar += valorBar * 0.1;

    valorConta = (valorDiaria * numDiarias) + valorMassagem + valorFrigobar + valorBar;

    if (numDiarias > 10)
    {
        valorISS = valorConta * 0.01;
    }
    else if (numDiarias > 5)
    {
        valorISS = valorConta * 0.03;
    }
    else
    {
        valorISS = valorConta * 0.05;
    }

    cout << "Número da reserva: " << numReserva << endl;
    cout << "Nome do responsável pela reserva: " << nomeReserva << endl;
    cout << "Tipo de quarto: " << tipoQuarto << endl;
    cout << "Número de dias: " << numDiarias << endl;
    cout << "Valor das diárias: " << valorDiaria << endl;
    cout << "Valor total do serviço de massagem: " << valorMassagem << endl;
    cout << "Valor total do serviço de frigobar: " << valorFrigobar << endl;
    cout << "Valor total do serviço de bar: " << valorBar << endl;
    cout << "ISS: " << valorISS << endl;
    cout << "Conta Final: " << valorConta + valorISS << endl;

    return 0;
}
