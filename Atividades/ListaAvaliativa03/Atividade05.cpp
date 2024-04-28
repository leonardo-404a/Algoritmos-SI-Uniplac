#include <iostream>

using namespace std;

int main()
{
    int voto, totalVotos = 0, totalVotosCandidato1 = 0, totalVotosCandidato2 = 0, totalVotosCandidato3 = 0, totalVotosNulo = 0, totalVotosBranco = 0;
    float percentualVotosCandidato1, percentualVotosCandidato2, percentualVotosCandidato3, percentualVotosNulo, percentualVotosBranco;
    string nomeVencedor;

    for (int i = 0; i < 20; i++)
    {
        cout << "Digite o voto do eleitor " << i + 1 << " (1 = Candidato 1, 2 = Candidato 2, 3 = Candidato 3, 5 = Voto nulo, 6 = Voto em branco): ";
        cin >> voto;

        switch (voto)
        {
        case 1:
            totalVotosCandidato1++;
            break;
        case 2:
            totalVotosCandidato2++;
            break;
        case 3:
            totalVotosCandidato3++;
            break;
        case 5:
            totalVotosNulo++;
            break;
        case 6:
            totalVotosBranco++;
            break;
        default:
            cout << "Voto inválido." << endl;
            return 1;
        }

        totalVotos++;
    }

    percentualVotosCandidato1 = (totalVotosCandidato1 * 100) / totalVotos;
    percentualVotosCandidato2 = (totalVotosCandidato2 * 100) / totalVotos;
    percentualVotosCandidato3 = (totalVotosCandidato3 * 100) / totalVotos;
    percentualVotosNulo = (totalVotosNulo * 100) / totalVotos;
    percentualVotosBranco = (totalVotosBranco * 100) / totalVotos;

    if (totalVotosCandidato1 > totalVotosCandidato2 && totalVotosCandidato1 > totalVotosCandidato3)
    {
        nomeVencedor = "Candidato 1";
    }
    else if (totalVotosCandidato2 > totalVotosCandidato1 && totalVotosCandidato2 > totalVotosCandidato3)
    {
        nomeVencedor = "Candidato 2";
    }
    else if (totalVotosCandidato3 > totalVotosCandidato1 && totalVotosCandidato3 > totalVotosCandidato2)
    {
        nomeVencedor = "Candidato 3";
    }
    else
    {
        nomeVencedor = "Empate";
    }

    cout << "Total de votos: " << totalVotos << endl;
    cout << "Percentual de votos para o Candidato 1: " << percentualVotosCandidato1 << "%" << endl;
    cout << "Percentual de votos para o Candidato 2: " << percentualVotosCandidato2 << "%" << endl;
    cout << "Percentual de votos para o Candidato 3: " << percentualVotosCandidato3 << "%" << endl;
    cout << "Percentual de votos nulos: " << percentualVotosNulo << "%" << endl;
    cout << "Percentual de votos em branco: " << percentualVotosBranco << "%" << endl;
    cout << "Vencedor: " << nomeVencedor << endl;

    return 0;
}