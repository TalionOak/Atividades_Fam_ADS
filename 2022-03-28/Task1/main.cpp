#include <iostream>
#include <locale>

using namespace std;

// Atividade 1
// Elabore um algoritmo que leia as variaveis C e N
// respectivamente c�digo e n�mero de horas trabalhadas de um oper�rio
// E calcule o sal�rio sabendo-se que ele ganha R$ 10,00 por hora.

// Quando o n�mero de horas exceder a 50 calcule o excesso de pagamento armazenando-o na vari�vel E
// caso contr�rio zerar tal vari�vel.
// A hora excedente de trabalho vale R$ 20,00.
// No final do processamento imprimir o sal�rio total e o sal�rio excedente.


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float horasTrabalhadas, salario;
    float horasExtras, salarioExtra;

    cout << "Informe a quantidade de horas trabalhadas" << endl;
    cin >> horasTrabalhadas;

    if(horasTrabalhadas > 50)
    {
        horasExtras = horasTrabalhadas - 50;
        horasTrabalhadas = 50;

        salarioExtra = horasExtras * 20;
        cout << endl << "Por ter trabalhado horas a mais, voc� ganhou R$" << salarioExtra << " extra!" << endl << endl;
    }

    salario = horasTrabalhadas * 10;

    cout << "Voc� ganhou R$" << salario << " reais de salario!" << endl;

    return 0;
}
