// O código utiliza "Quick Sort" para ordenar um vetor.
// O código utiliza a função implementada quickSort(); e a função da biblioteca <cstdlib> qsort();.

#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void quickSort(int vetor[], int esquerda, int direita)
{
    int aux, i = esquerda, j = direita;
    int pivo = vetor[(esquerda + direita) / 2];

    while (i <= j)
    {
        while (vetor[i] < pivo)
        {
            i++;
        }
        while (vetor[j] > pivo)
        {
            j--;
        }
        if (i <= j)
        {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    }
    if (esquerda < j)
    {
        quickSort(vetor, esquerda, j);
    }
    if (direita > i)
    {
        quickSort(vetor, i, direita);
    }
}

int compare(const void *a, const void *b)
{
    const int *y = (int *)a;
    const int *x = (int *)b;

    if (*x > *y)
    {
        return 1;
    }
    else if (*x < *y)
    {
        return -1;
    }
    return 0;
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    // UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    const int tamanho = 10;
    int vetor[] = {9, 4, 19, 2, 7, 9, 5, 15, 23, 3};

    cout << "Vetor não ordenado: \n";
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }

//     cout << "\n\nVetor ordenado utilizando função: \n";
//     for (int i = 0; i < tamanho / 2; i++)
//     {
//         for (int j = tamanho/2; j > tamanho; j++)
//         {
//             quickSort(vetor, j, i);
//         }
//     }
//     for (int i = 0; i < tamanho; i++)
//     {
//         cout << vetor[i] << " ";
//     }

    cout << "\n\nVetor ordenado utilizando o qsort(): \n";
    qsort(vetor, tamanho, sizeof(int), compare);
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
}
