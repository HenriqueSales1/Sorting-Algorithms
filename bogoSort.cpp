// O código abaixo utiliza "Bogo Sort" para organizar um vetor.
// O algoritmo não é pratico, por possuir complexidade de O(n), O(n^n!) e O(1), podendo demorar anos para ordenar o vetor.

#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

bool verOrdenado(int vetor[], int tamanho)
{
    while (--tamanho > 1)
    {
        if (vetor[tamanho] < vetor[tamanho - 1])
        {
            return false;
        }
    }
    return true;
}

void mix(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        swap(vetor[i], vetor[rand() % tamanho]);
    }
}

void bogoSort(int vetor[], int tamanho)
{
    while (!verOrdenado(vetor, tamanho))
    {
        mix(vetor, tamanho);
    }
}

void imprimeVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    int vetor[] = {2, 1, 5, 6, 3, 8, 4, 9, 0, 7};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    bogoSort(vetor, tamanho);
    cout << "Vetor ordenado: ";
    imprimeVetor(vetor, tamanho);
}
