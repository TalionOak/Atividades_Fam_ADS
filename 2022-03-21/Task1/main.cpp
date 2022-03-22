#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

// Escreva um programa que o usuário informe 4 notas e o programa informe a média do aluno.

// - Note que adicionei algumas coisas a mais.

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float nota1, nota2, nota3, nota4, media;

    cout << "Por favor, informe 4 notas:" << endl;
    cin >> nota1 >> nota2 >> nota3 >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) /4;

    cout << endl << "Você teve " << media << " de média." << endl << endl;

    if(media >= 6)
    {
        cout << "Como sua média foi superior a 6, você está aprovado!" << endl;
        if(media == 10)
            cout << "Nossa, você é ferá mesmo, tirou 10 como média!" << endl;
    }
    else
        cout << "Você não passou! Melhor estudar mais para não ter outro DP!" << endl;;

    return 0;
}
