#include <iostream>
#include <locale>

using namespace std;

// Atividade 3
// Peça ao usuario o nome e a idade de duas pessoas
// e mostre na tela os nomes e as idades informados
// e a media das idades informadas

int main()
{
    // Permitir acentuação.
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variavies
    int idade1, idade2, media;
    string nome1, nome2;

    // Pedindo e salvando os valores da primeira pessoa
    cout << "Por favor, informe o nome e idade da primeira pessoa SEPARADO POR ENTER:" << endl;
    cin >> nome1 >> idade1;

    // Pedindo e salvando os valores da segunda pessoa
    cout << "Por favor, informe o nome e idade da segunda pessoa SEPARADO POR ENTER:" << endl;
    cin >> nome2 >> idade2;

    cout << endl << nome1 << " tem " << idade1 << " anos de idade." << endl;
    cout << endl << nome2 << " tem " << idade2 << " anos de idade." << endl;

    media = (idade1 + idade2) / 2;

    cout << endl << "A média de idade das duas pessoas é de " << media << " anos" << endl << endl;

    return 0;
}
