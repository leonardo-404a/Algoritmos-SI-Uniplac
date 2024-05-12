#include <iostream>

using namespace std;

int main() {
    string nome;
    float nota, media = 0;
    int i = 0;

    while (i < 15) {
        cout << "Digite o nome do aluno: ";
        cin >> nome;

        if (nome == "fim") {
            break;
        }

        cout << "Digite a nota do aluno: ";
        cin >> nota;

        media += nota;
        i++;
    }

    cout << "A média da turma é: " << media / i << endl;

    return 0;
}