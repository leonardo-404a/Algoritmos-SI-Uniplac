#include <iostream>
#include <string>

using namespace std;

int main()
{
    float valorCarro, valorFinal;
    string opcionais;
    char pagamento;

    cout << "Digite o valor inicial do carro: ";
    cin >> valorCarro;

    cout << "O carro possui vidro elétrico? (S/N) ";
    cin >> opcionais;
    if (opcionais == "S" || opcionais == "s")
    {
        valorCarro += 500;
    }

    cout << "O carro possui ar condicionado? (S/N) ";
    cin >> opcionais;
    if (opcionais == "S" || opcionais == "s")
    {
        valorCarro += 2000;
    }

    cout << "O carro possui trava central e alarme? (S/N) ";
    cin >> opcionais;
    if (opcionais == "S" || opcionais == "s")
    {
        valorCarro += 500;
    }

    cout << "O carro possui pintura metálica? (S/N) ";
    cin >> opcionais;
    if (opcionais == "S" || opcionais == "s")
    {
        valorCarro += 1000;
    }

    cout << "O carro possui direção hidráulica? (S/N) ";
    cin >> opcionais;
    if (opcionais == "S" || opcionais == "s")
    {
        valorCarro += 2500;
    }

    cout << "O pagamento será à vista? (S/N) ";
    cin >> pagamento;
    if (pagamento == 'S' || pagamento == 's')
    {
        valorFinal = valorCarro - (valorCarro * 0.05);
    }
    else
    {
        valorFinal = valorCarro;
    }

    cout << "O valor final do carro é R$ " << valorFinal << endl;

    return 0;
}
