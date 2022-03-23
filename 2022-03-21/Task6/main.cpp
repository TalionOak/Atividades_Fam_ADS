#include <iostream>
#include <locale>

using namespace std;

// Atividade 5
// Leia o tempo de duração de um evento expresso em segundos
// e mostre expresso em horas, minutos e segundos.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int segundosInformado, minutos, horas, segundos;

    cout << "Por favor, informe um tempo em segundos: ";
    cin >> segundosInformado;

    horas = segundosInformado / 3600;
    minutos = (segundosInformado / 60) % 60;
    segundos = ( segundosInformado) % 60;

    cout << "O tempo de duração será de: " << horas << "h " << minutos << "m " << segundos << "s..." << endl << endl;

    return 0;
}
