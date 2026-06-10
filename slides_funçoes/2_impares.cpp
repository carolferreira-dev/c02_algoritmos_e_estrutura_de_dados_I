/*
2) CRIE UM PROGRAMA QUE LEIA 10 NÚMEROS EM UM VETOR E RETORNE QUANTOS DELES
SÃO ÍMPARES
EX: [10, 2, 3, 7, 1, 0, -1, -8, 200, 300]
SAÍDA: 4
*/

//biblioteca
#include <iostream>
#include <locale.h>

using namespace std;

//função para contar os números impares
int contarimpares(int vetor[], int tamanho)
{
    //declaração de váriaveis
    int contagem = 0;

    //desenvolvimento
    //percorrer todo o vetor
    for (int i = 0; i < tamanho; i++)
    {
        //verifique se o número é impar
        if(vetor[i] % 2 != 0)
        {
            contagem++; //incrementar o contador impar
        }

    }
    //retornar a quantidade de impares
    return contagem;
}
int main()
{
    //declaração de váriaveis
    int numeros[10];

    //entrada de dados
    cout << "Digite 10 números: " << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> numeros[i];
    }

    //desenvolvimento
    int total = contarimpares(numeros, 10);
    
    //saida de dados
    cout << "Saída: " << total << endl;

    return 0;
}