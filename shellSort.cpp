// O código abaixo utiliza "Shell Sort" para organizar um vetor

#include <iostream>
using namespace std;

void shellSort(int vetor[], int tamanho)
{
    int h, x, i, j;
    for (h = 1; h < tamanho; h = 3 * h + 1)
        ;
    while (h > 1)
    {
        h = h / 3;
        for (i = h; i < tamanho; i++)
        {
            x = vetor[i];
            j = i;
            while (j >= h && vetor[j - h] > x)
            {
                vetor[j] = vetor[j - h];
                j = j - h;
            }
            vetor[j] = x;
        }
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
    int vetor[] = {3, 4, 9, 2, 5, 1, 8, 7, 10, 6, 20, 13, 15, 11, 0};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    shellSort(vetor, tamanho);
    cout << "\n\nVetor ordenado: ";
    imprimeVetor(vetor, tamanho);
}
