#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string nomeArtigo1, nomeArtigo2, nomeArtigo3;
    float precoArtigo1, precoArtigo2, precoArtigo3;
    float descontoArtigo1, descontoArtigo2, descontoArtigo3;
    float precoComDesconto1, precoComDesconto2, precoComDesconto3;
    float totalPagar;

    cout << "Insira o nome do artigo 1: ";
    cin >> nomeArtigo1;
    cout << "Insira o preço do artigo 1: ";
    cin >> precoArtigo1;
    cout << "Insira o desconto do artigo 1 (em porcentagem): ";
    cin >> descontoArtigo1;

    cout << "Insira o nome do artigo 2: ";
    cin >> nomeArtigo2;
    cout << "Insira o preço do artigo 2: ";
    cin >> precoArtigo2;
    cout << "Insira o desconto do artigo 2 (em porcentagem): ";
    cin >> descontoArtigo2;

    cout << "Insira o nome do artigo 3: ";
    cin >> nomeArtigo3;
    cout << "Insira o preço do artigo 3: ";
    cin >> precoArtigo3;
    cout << "Insira o desconto do artigo 3 (em porcentagem): ";
    cin >> descontoArtigo3;

    precoComDesconto1 = precoArtigo1 - (precoArtigo1 * descontoArtigo1 / 100);
    precoComDesconto2 = precoArtigo2 - (precoArtigo2 * descontoArtigo2 / 100);
    precoComDesconto3 = precoArtigo3 - (precoArtigo3 * descontoArtigo3 / 100);

    totalPagar = precoComDesconto1 + precoComDesconto2 + precoComDesconto3;

    system("cls");

    cout << "Nome do artigo 1: " << nomeArtigo1 << endl;
    cout << "Preço sem desconto do artigo 1: " << precoArtigo1 << endl;
    cout << "Preço com desconto do artigo 1: " << precoComDesconto1 << endl;

    cout << endl;

    cout << "Nome do artigo 2: " << nomeArtigo2 << endl;
    cout << "Preço sem desconto do artigo 2: " << precoArtigo2 << endl;
    cout << "Preço com desconto do artigo 2: " << precoComDesconto2 << endl;

    cout << endl;

    cout << "Nome do artigo 3: " << nomeArtigo3 << endl;
    cout << "Preço sem desconto do artigo 3: " << precoArtigo3 << endl;
    cout << "Preço com desconto do artigo 3: " << precoComDesconto3 << endl;

    cout << endl;

    cout << "Total a pagar: " << totalPagar << endl;

    getch();
    return 0;
}