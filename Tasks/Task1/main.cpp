#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

// Escreva um programa que o usu�rio informe 4 notas e o programa informe a m�dia do aluno.

// - Note que adicionei algumas coisas a mais.

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float nota1, nota2, nota3, nota4, media;

    cout << "Por favor, informe 4 notas:" << endl;
    cin >> nota1 >> nota2 >> nota3 >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) /4;

    cout << endl << "Voc� teve " << media << " de m�dia." << endl << endl;

    if(media >= 6)
    {
        cout << "Como sua m�dia foi superior a 6, voc� est� aprovado!" << endl;
        if(media == 10)
            cout << "Nossa, voc� � fer� mesmo, tirou 10 como m�dia!" << endl;
    }
    else
        cout << "Voc� n�o passou! Melhor estudar mais para n�o ter outro DP!" << endl;;

    return 0;
}
