#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float largura, altura, comprimento, barbanteNecessario;
    int amarras = 3;

    cout << "Insira a largura do pacote (em cm): ";
    cin >> largura;

    cout << "Insira a altura do pacote (em cm): ";
    cin >> altura;

    cout << "Insira o comprimento do pacote (em cm): ";
    cin >> comprimento;

    barbanteNecessario = (largura + altura + comprimento) * amarras;
    cout << "A quantidade de barbante necessária é: " << barbanteNecessario << " cm" << endl;

    getch();
    return 0;
}