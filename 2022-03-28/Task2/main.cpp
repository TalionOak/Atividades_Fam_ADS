#include <iostream>
#include <locale>
#include <stdio.h>

using namespace std;

// Atividade 2

// Leia 4 numeros
// Calcule o quadrado de cada um
// Se o valor resultante do quadrado do tereceiro for >= 1000, imprima-o e e finalize
// Caso contrário, imprima os valores lidos e seus respectivos quadrados

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variaveis
    float numb1, numb2, numb3, numb4;
    float quad1, quad2, quad3, quad4;

    cout << "Informe 4 números SEPARADOS POR ENTER" << endl;
    cin >> numb1 >> numb2 >> numb3 >> numb4;

    // Calculo do quadrado
    quad1 = numb1 * numb1;
    quad2 = numb2 * numb2;
    quad3 = numb3 * numb3;

    // Verificando se o terceiro quadrado é superior a 1000
    if(quad3 >= 1000)
    {
        cout << "O valor do terceiro quadrado foi supeior a 1000" << endl;
        // Terminando o programa
        return 0;
    }
    // Se não for superior, continua
    quad4 = numb4 * numb4;

    // Mostra os resultados
    cout << "Quadrado: " << numb1 << "² = " << quad1 << endl;
    cout << "Quadrado: " << numb2 << "² = " << quad2 << endl;
    cout << "Quadrado: " << numb3 << "² = " << quad3 << endl;
    cout << "Quadrado: " << numb4 << "² = " << quad4 << endl;

    return 0;
}
