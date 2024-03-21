#include <iostream>
using namespace std;

int main()
{
    string marca;
    float kmInicial, kmFinal, litrosConsumidos, consumo;

    cout << "Digite a marca do automóvel: ";
    cin >> marca;

    cout << "Digite a quilometragem inicial: ";
    cin >> kmInicial;

    cout << "Digite a quilometragem final: ";
    cin >> kmFinal;

    cout << "Digite a quantidade de litros consumidos: ";
    cin >> litrosConsumidos;

    consumo = (kmFinal - kmInicial) / litrosConsumidos;

    cout << "Marca do automóvel: " << marca << endl;
    cout << "Quilometragem inicial: " << kmInicial << endl;
    cout << "Quilometragem final: " << kmFinal << endl;
    cout << "Litros consumidos: " << litrosConsumidos << endl;
    cout << "Consumo do automóvel: " << consumo << " km/litro" << endl;

    return 0;
}
