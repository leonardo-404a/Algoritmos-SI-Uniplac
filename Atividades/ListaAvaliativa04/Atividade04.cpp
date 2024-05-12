#include <iostream>

using namespace std;

int main()
{
    string nome, nomeProdutoMaisBarato, nomeProdutoMaisVendido;
    float preco, precoProdutoMaisBarato = 0, precoProdutoMaisVendido = 0, quantidade, quantidadeProdutoMaisVendido = 0, media = 0;
    int i = 0;

    while (true)
    {
        cout << "Digite o nome do produto: ";
        cin >> nome;

        if (nome == "fim")
        {
            break;
        }

        cout << "Digite o preço do produto: ";
        cin >> preco;

        cout << "Digite a quantidade vendida do produto: ";
        cin >> quantidade;

        media += preco;
        i++;

        if (preco < precoProdutoMaisBarato || precoProdutoMaisBarato == 0)
        {
            precoProdutoMaisBarato = preco;
            nomeProdutoMaisBarato = nome;
        }

        if (quantidade > quantidadeProdutoMaisVendido)
        {
            quantidadeProdutoMaisVendido = quantidade;
            nomeProdutoMaisVendido = nome;
        }
    }

    cout << "O produto mais barato é " << nomeProdutoMaisBarato << " com o preço de R$" << precoProdutoMaisBarato << endl;
    cout << "O produto mais vendido é " << nomeProdutoMaisVendido << " com a quantidade de " << quantidadeProdutoMaisVendido << " unidades vendidas" << endl;
    cout << "A média de preço dos produtos é: R$" << media / i << endl;

    return 0;
}
