#include <iostream>

using namespace std;

int main()
{
    int voto, totalVotos = 0, votosCandidato1 = 0, votosCandidato2 = 0, votosCandidato3 = 0;

    while (true)
    {
        cout << "Digite o número do candidato que deseja votar: ";
        cin >> voto;

        if (voto == 0)
        {
            break;
        }

        totalVotos++;

        switch (voto)
        {
        case 1:
            votosCandidato1++;
            break;
        case 2:
            votosCandidato2++;
            break;
        case 3:
            votosCandidato3++;
            break;
        default:
            cout << "Candidato inválido." << endl;
            break;
        }
    }

    cout << "Percentual de votos do candidato 1: " << (votosCandidato1 * 100) / totalVotos << "%" << endl;
    cout << "Percentual de votos do candidato 2: " << (votosCandidato2 * 100) / totalVotos << "%" << endl;
    cout << "Percentual de votos do candidato 3: " << (votosCandidato3 * 100) / totalVotos << "%" << endl;

    return 0;
}
