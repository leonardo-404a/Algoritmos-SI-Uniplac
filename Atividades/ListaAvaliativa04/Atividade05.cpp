#include <iostream>

using namespace std;

int main()
{
    string nome, sexo, sexoMaiorMedia;
    float salario, salarioMaiorMedia = 0, mediaMasculino = 0, mediaFeminino = 0;
    int i = 0, qtdMasculino = 0, qtdFeminino = 0;

    while (true)
    {
        cout << "Digite o nome do funcionário: ";
        cin >> nome;

        if (nome == "fim")
        {
            break;
        }

        cout << "Digite o sexo do funcionário (M/F): ";
        cin >> sexo;

        cout << "Digite o salário do funcionário: ";
        cin >> salario;

        if (sexo == "M")
        {
            mediaMasculino += salario;
            qtdMasculino++;
        }
        else if (sexo == "F")
        {
            mediaFeminino += salario;
            qtdFeminino++;
        }

        i++;
    }

    mediaMasculino /= qtdMasculino;
    mediaFeminino /= qtdFeminino;

    if (mediaMasculino > mediaFeminino)
    {
        sexoMaiorMedia = "Masculino";
        salarioMaiorMedia = mediaMasculino;
    }
    else
    {
        sexoMaiorMedia = "Feminino";
        salarioMaiorMedia = mediaFeminino;
    }

    cout << "O sexo com a maior média salarial é " << sexoMaiorMedia << " com a média de R$" << salarioMaiorMedia << endl;

    return 0;
}
