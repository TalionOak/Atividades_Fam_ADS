#include <iostream>
#include <locale>

using namespace std;

// Atividade 3
// Dado tr�s valores, A, B e C. Verifique se eles podem ser o comprimento dos lados de um tri�ngulo
// Se forem, verificar se comp�em um tri�ngulo equil�tero, is�sceles ou escaleno.
// Verificar se n�o formam nenhum tri�ngulo tamb�m.

// Dados de sa�da: - mensagens: n�o comp�em um tri�ngulo, tri�ngulo Equil�tero, tri�ngulo
// is�sceles, triangulo escaleno.
// Um tri�ngulo � uma figura geom�trica fechada de tr�s lados, em que cada um � menor que a soma
// dos outros dois.
// Tri�ngulo equil�tero: possui tr�s lados iguais.
// Tri�ngulo is�sceles: possui dois lados iguais.
// Tri�ngulo escaleno: possui todos os lados diferentes.

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float ladoA, ladoB, ladoC;



    cout << "Informe os lados A, B e C separados por enter!!" << endl;
    cin >> ladoA >> ladoB >> ladoC;

    if(ladoA < (ladoB + ladoC) && ladoB < (ladoA + ladoC) && ladoC < (ladoA + ladoB))
    {
        cout << "� um triangulo!" << endl;
    }
    else
        cout << "N�o � um triangulo!" << endl;


             return 0;
}
