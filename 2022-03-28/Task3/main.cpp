#include <iostream>
#include <locale>

using namespace std;

// Atividade 3
// Dado três valores, A, B e C. Verifique se eles podem ser o comprimento dos lados de um triângulo
// Se forem, verificar se compõem um triângulo equilátero, isósceles ou escaleno.
// Verificar se não formam nenhum triângulo também.

// Dados de saída: - mensagens: não compõem um triângulo, triângulo Equilátero, triângulo
// isósceles, triangulo escaleno.
// Um triângulo é uma figura geométrica fechada de três lados, em que cada um é menor que a soma
// dos outros dois.
// Triângulo equilátero: possui três lados iguais.
// Triângulo isósceles: possui dois lados iguais.
// Triângulo escaleno: possui todos os lados diferentes.

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float ladoA, ladoB, ladoC;



    cout << "Informe os lados A, B e C separados por enter!!" << endl;
    cin >> ladoA >> ladoB >> ladoC;

    if(ladoA < (ladoB + ladoC) && ladoB < (ladoA + ladoC) && ladoC < (ladoA + ladoB))
    {
        cout << "É um triangulo!" << endl;
    }
    else
        cout << "Não é um triangulo!" << endl;


             return 0;
}
