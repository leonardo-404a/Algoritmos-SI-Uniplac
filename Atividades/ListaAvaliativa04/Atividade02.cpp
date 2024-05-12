#include <iostream>

using namespace std;

int main()
{
    string nome, nomeMaisVelho;
    int idade, idadeMaisVelho = 0;

    while (true)
    {
        cout << "Digite o nome do aluno: ";
        cin >> nome;

        cout << "Digite a idade do aluno: ";
        cin >> idade;

        if (idade == 0)
        {
            break;
        }

        if (idade > idadeMaisVelho)
        {
            idadeMaisVelho = idade;
            nomeMaisVelho = nome;
        }
    }

    cout << "O aluno mais velho é " << nomeMaisVelho << " com " << idadeMaisVelho << " anos." << endl;

    return 0;
}
