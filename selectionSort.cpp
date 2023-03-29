// O código abaixo utiliza "Selection Sort" para ordenar um vetor

#include <iostream>
#include <windows.h>

using namespace std;

void selectionSort(int vetor[], int tamanho)
{
    int min, aux;

    for (int i = 0; i < tamanho; i++)
    {
        min = i;
        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[min])
            {
                min = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = aux;
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

    UINT CPAGE_UTF8 = 65001;
    // UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[] = {6, 3, 4, 2, 5, 1};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    cout << "Vetor não ordenado: \n";
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    selectionSort(vetor, tamanho);
    cout << "\n\nVetor ordenado: \n";
    imprimeVetor(vetor, tamanho);
}
