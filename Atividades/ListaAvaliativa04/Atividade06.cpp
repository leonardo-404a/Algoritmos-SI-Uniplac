#include <iostream>

using namespace std;

int main()
{
    int numeroConsumidor, tipoConsumidor;
    float kwh, custoTotal, totalResidencial = 0, totalComercial = 0, totalIndustrial = 0;
    string categoriaMaisConsumidora;

    while (true)
    {
        cout << "Digite o número do consumidor: ";
        cin >> numeroConsumidor;

        if (numeroConsumidor == 0)
        {
            break;
        }

        cout << "Digite a quantidade de kWh consumidos: ";
        cin >> kwh;

        cout << "Digite o tipo do consumidor (1 - Residencial, 2 - Comercial, 3 - Industrial): ";
        cin >> tipoConsumidor;

        switch (tipoConsumidor)
        {
        case 1:
            custoTotal = kwh * 0.3;
            totalResidencial += kwh;
            break;
        case 2:
            custoTotal = kwh * 0.5;
            totalComercial += kwh;
            break;
        case 3:
            custoTotal = kwh * 0.7;
            totalIndustrial += kwh;
            break;
        default:
            cout << "Tipo de consumidor inválido." << endl;
            break;
        }

        cout << "O custo total para o consumidor " << numeroConsumidor << " é de R$" << custoTotal << endl;
    }

    if (totalResidencial > totalComercial && totalResidencial > totalIndustrial)
    {
        categoriaMaisConsumidora = "Residencial";
    }
    else if (totalComercial > totalResidencial && totalComercial > totalIndustrial)
    {
        categoriaMaisConsumidora = "Comercial";
    }
    else
    {
        categoriaMaisConsumidora = "Industrial";
    }

    cout << "O total de consumo para os consumidores residenciais é de " << totalResidencial << " kWh" << endl;
    cout << "O total de consumo para os consumidores comerciais é de " << totalComercial << " kWh" << endl;
    cout << "O total de consumo para os consumidores industriais é de " << totalIndustrial << " kWh" << endl;
    cout << "A categoria que consome mais é " << categoriaMaisConsumidora << endl;

    return 0;
}
