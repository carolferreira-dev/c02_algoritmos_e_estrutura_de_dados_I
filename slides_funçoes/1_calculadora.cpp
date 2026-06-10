/*
1) DESENVOLVA UMA CALCULADORA EM C++ QUE REALIZE AS OPERAÇÕES DE SOMA,
SUBSTRAÇÃO, MULTIPLICAÇÃO E DIVISÃO. CADA OPERAÇÃO DEVE SER IMPLEMENTADA EM
UMA FUNÇÃO COM RETORNO E PASSAGEM DE PARÂMETROS.
*/

//biblioca
#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

//função das operações
//soma
float soma(float x, float y)
{
    return x + y;
}

//substração
float subtracao(float x, float y)
{
    return x - y;
}

//multiplicação
float multiplicacao(float x, float y)
{
    return x * y;
}

//divisão
float divisao(float x, float y)
{
    return x / y;
}

//função principal
int main()
{
    //declaração de variáveis
    setlocale (LC_ALL, "Portuguese");
    float num1, num2; 
    char operacao;

    cout << "---------- CALCULADORA ----------" << endl;
    //entrada de dados
    //números
    cout << "Digite os números: ";
    cin >> num1 >> num2;

    //operação
    cout << "Escolha a operação desejada: ";
    cout << "A - ADIÇÃO\nS - SUBTRAÇÃO\nM - MULTIPLICAÇÃO\nD - DIVISÃO" << endl;
    cin >> operacao;

    //desenvolvimento - saída de dados
    cout << "RESULTADO: ";

    if(operacao == 'A')
    {
        cout << soma(num1, num2) << endl;
    }
    else if (operacao == 'S')
    {
        cout << subtracao(num1, num2) << endl;
    }
    else if (operacao == 'M')
    {
        cout << multiplicacao(num1, num2) << endl;
    }
    else if(operacao == 'D')
    {
        if (num2 != 0)
        {
            cout << divisao(num1, num2) << endl;
        }
        else
        {
            cout << "ERRO! NÃO É POSSÍVEL DIVIDIR POR ZERO." << endl;
        }
    }
    else
    {
        cout << "OPERAÇÃO INVÁLIDA" << endl;
    }

    return 0;
}