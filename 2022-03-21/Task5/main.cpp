#include <iostream>
#include <locale>

using namespace std;

//Atividade 5
// Leia 3 notas de um aluno
// Calcula a média final.
// Considerar que a média é pondera
// e o peso é 2,3 e 5

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, mediaPonderada;
    int peso1 = 2, peso2 = 3, peso3 = 5;

    cout << "Por favor informe, 3 notas SEPARADAS POR ENTER:" << endl;
    cin >> nota1 >> nota2 >> nota3;

    mediaPonderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    cout << "Sua média foi: " << mediaPonderada;
    return 0;
}
