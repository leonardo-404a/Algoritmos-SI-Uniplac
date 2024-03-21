#include <iostream>
using namespace std;

int main()
{
    int diaNascimento, mesNascimento, anoNascimento, diasVividos;

    cout << "Digite o dia do seu nascimento: ";
    cin >> diaNascimento;

    cout << "Digite o mês do seu nascimento: ";
    cin >> mesNascimento;

    cout << "Digite o ano do seu nascimento: ";
    cin >> anoNascimento;

    diasVividos = (anoNascimento * 360) + (mesNascimento * 30) + diaNascimento;

    cout << "Você já viveu " << diasVividos << " dias." << endl;

    return 0;
}
