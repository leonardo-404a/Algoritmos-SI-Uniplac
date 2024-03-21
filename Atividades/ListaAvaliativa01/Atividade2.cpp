#include <iostream>
using namespace std;

int main()
{
    int qtdP1, qtdP2, qtdP3;
    float totalP1, totalP2, totalP3;

    cout << "Digite a quantidade de picolés do tipo 1 vendidos: ";
    cin >> qtdP1;

    cout << "Digite a quantidade de picolés do tipo 2 vendidos: ";
    cin >> qtdP2;

    cout << "Digite a quantidade de picolés do tipo 3 vendidos: ";
    cin >> qtdP3;

    totalP1 = qtdP1 * 0.50;
    totalP2 = qtdP2 * 0.60;
    totalP3 = qtdP3 * 0.75;

    cout << "Total arrecadado com picolés do tipo 1: " << totalP1 << endl;
    cout << "Total arrecadado com picolés do tipo 2: " << totalP2 << endl;
    cout << "Total arrecadado com picolés do tipo 3: " << totalP3 << endl;

    return 0;
}
