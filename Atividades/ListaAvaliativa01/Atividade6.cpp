#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14159265358979323846;
    float raio, volume;

    cout << "Digite o raio da esfera: ";
    cin >> raio;

    volume = (4 * PI * pow(raio, 3)) / 3;

    cout << "O volume da esfera é: " << volume << endl;

    return 0;
}