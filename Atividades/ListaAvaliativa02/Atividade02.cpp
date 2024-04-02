#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nota;
    string conceito;

    cout << "Digite a nota do aluno: ";
    cin >> nota;

    if (nota >= 0 && nota <= 39)
    {
        conceito = "E";
    }
    else if (nota >= 40 && nota <= 59)
    {
        conceito = "D";
    }
    else if (nota >= 60 && nota <= 75)
    {
        conceito = "C";
    }
    else if (nota >= 76 && nota <= 89)
    {
        conceito = "B";
    }
    else if (nota >= 90 && nota <= 100)
    {
        conceito = "A";
    }
    else
    {
        cout << "Nota inválida." << endl;
        return 1;
    }

    cout << "O aluno obteve o conceito " << conceito << " com a nota " << nota << "." << endl;

    return 0;
}
