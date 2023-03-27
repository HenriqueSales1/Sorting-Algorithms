// O código abaixo utiliza "Bubble Sort" para manipular um vetor e conta quantas trocas foram realizadas

#include <iostream>
#include <windows.h>
using namespace std;

int bubbleSort(int vetor[], int tamanho)
{

    int aux, troca, trocas = 0;

    for (int i = 0; i < tamanho - 1; i++)
    {

        troca = 0;

        for (int j = 1; j < tamanho - i; j++)
        {
            if (vetor[j] < vetor[j - 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
                troca = 1;
                trocas += 1;
            }
        }
        if (troca == 0)
        {
            break;
        }
    }
    return trocas;
}

int bubbleSortM(int vetor[], int tamanho)
{

    int aux, troca, trocas = 0;

    for (int i = 0; i < tamanho - 1; i++)
    {

        troca = 0;

        for (int j = 1; j < tamanho - i; j++)
        {
            if (vetor[j] > vetor[j - 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j - 1];
                vetor[j - 1] = aux;
                troca = 1;
                trocas += 1;
            }
        }
        if (troca == 0)
        {
            break;
        }
    }
    return trocas;
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    // UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[] = {8, 11, 20, 5, 17, 30, 14, 15, 28, 19};
    int trocas;

    cout << "Vetor original: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << vetor[i] << " ";
    }

    cout << endl;

    trocas = bubbleSort(vetor, 10);
    cout << "\n\nVetor ordenado: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << "\nTrocas realizadas: " << trocas;

    cout << endl;

    cout << "\n\nVetor ordenado (ao contrário): \n";
    trocas = bubbleSortM(vetor, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << "\n\nTrocas realizadas: " << trocas;

    cout << endl
         << endl;
}
