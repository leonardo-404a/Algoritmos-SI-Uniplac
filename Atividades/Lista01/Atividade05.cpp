#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float precoMercadoria17, precoMercadoria18, variacaoPreco, taxaInflacaoDeflacao;

    cout << "Insira o preço da mercadoria em 17/03: ";
    cin >> precoMercadoria17;

    cout << "Insira o preço da mercadoria em 18/03: ";
    cin >> precoMercadoria18;

    variacaoPreco = precoMercadoria18 - precoMercadoria17;
    taxaInflacaoDeflacao = (variacaoPreco / precoMercadoria17) * 100;

    cout << "A variação de preço foi de: " << variacaoPreco << endl;
    cout << "A taxa de inflação ou deflação foi de: " << taxaInflacaoDeflacao << "%" << endl;

    getch();
    return 0;
}