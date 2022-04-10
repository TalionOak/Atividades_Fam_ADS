#include <iostream>
#include <locale>

using namespace std;

// Atividade 4
// Leia a idade de uma pessoa expressa em dias
// Mostre-a expressa em anos, meses e dias
// Considere meses de 30 dias e ano de 365 dias

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int diasInformado;
    int anos, meses, dias;

    cout << "Informe a sua idade em dias: ";
    cin >> diasInformado;

    anos = diasInformado / 365;
    meses = (diasInformado % 365) / 30;
    dias = (diasInformado % 365) % 30;

    cout << endl << "Separei a quantidade exata de anos, mesês e dias para você:" << endl << endl;
    cout << "Anos: " << anos << endl;
    cout << "Meses: " << meses << endl;
    cout << "Dias: " << dias << endl << endl;

    return 0;
}
