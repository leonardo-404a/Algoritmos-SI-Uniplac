#include <iostream>

using namespace std;

int main()
{
    int totalHomens = 0, totalMulheres = 0;
    string nome;
    char sexo;

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> nome;
        cout << "Digite o sexo da pessoa " << i + 1 << " (M/F): ";
        cin >> sexo;

        if (sexo == 'M' || sexo == 'm')
        {
            totalHomens++;
        }
        else if (sexo == 'F' || sexo == 'f')
        {
            totalMulheres++;
        }
        else
        {
            cout << "Sexo inválido." << endl;
            return 1;
        }
    }

    cout << "Total de homens: " << totalHomens << endl;
    cout << "Total de mulheres: " << totalMulheres << endl;

    return 0;
}