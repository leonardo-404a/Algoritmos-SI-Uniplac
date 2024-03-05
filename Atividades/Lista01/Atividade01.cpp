#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float celsius, fahrenheit;
    cout << "Insira a temperatura em celsius: ";
    cin >> celsius;
    fahrenheit = celsius * 1.8 + 32;
    cout << "A temperatura em fahrenheit é: " << fahrenheit << endl;

    getch();
    return 0;
}
