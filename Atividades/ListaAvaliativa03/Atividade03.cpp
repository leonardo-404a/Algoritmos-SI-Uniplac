#include <iostream>

using namespace std;

int main()
{
    string nome, nomeMaisAlto, nomeMaisNovo;
    int idade, totalPessoasMaisDe35Anos = 0, totalPessoasMaisDe1_80 = 0;
    float altura, alturaMaisAlto = 0, mediaIdadeMaisDe1_80 = 0, somaIdadeMaisDe1_80 = 0;
    int idadeMaisNovo = 999;

    for (int i = 0; i < 20; i++)
    {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> nome;
        cout << "Digite a idade da pessoa " << i + 1 << ": ";
        cin >> idade;
        cout << "Digite a altura da pessoa " << i + 1 << ": ";
        cin >> altura;

        if (altura > 1.80)
        {
            totalPessoasMaisDe1_80++;
            somaIdadeMaisDe1_80 += idade;
        }

        if (idade > 35)
        {
            totalPessoasMaisDe35Anos++;
        }

        if (altura > alturaMaisAlto)
        {
            alturaMaisAlto = altura;
            nomeMaisAlto = nome;
        }

        if (idade < idadeMaisNovo)
        {
            idadeMaisNovo = idade;
            nomeMaisNovo = nome;
        }
    }

    if (totalPessoasMaisDe1_80 > 0)
    {
        mediaIdadeMaisDe1_80 = somaIdadeMaisDe1_80 / totalPessoasMaisDe1_80;
    }

    cout << "Média de idade das pessoas com mais de 1,80 de altura: " << mediaIdadeMaisDe1_80 << endl;
    cout << "Total de pessoas com mais de 35 anos: " << totalPessoasMaisDe35Anos << endl;
    cout << "Nome do mais alto: " << nomeMaisAlto << endl;
    cout << "Nome do mais novo: " << nomeMaisNovo << endl;

    return 0;
}
