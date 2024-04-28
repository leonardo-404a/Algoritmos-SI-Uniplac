#include <iostream>

using namespace std;

int main()
{
    float nota, somaNotas = 0;
    bool existeNotaZero = false;

    for (int i = 0; i < 20; i++)
    {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> nota;

        if (nota == 0)
        {
            existeNotaZero = true;
        }

        somaNotas += nota;
    }

    cout << "Média da turma: " << somaNotas / 20 << endl;

    if (existeNotaZero)
    {
        cout << "Existe pelo menos um aluno com nota igual a 0." << endl;
    }

    return 0;
}
