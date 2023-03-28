/** !! INCOMPLETO !! **/
// O código utiliza "Merge Sort" para organizar um dado vetor;

#include <iostream>
#include <windows.h>
using namespace std;

void merge(int vetor[], int const esquerda, int const meio,
           int const direita)
{
    int const subVetorUm = meio - esquerda + 1;
    int const subVetorDois = direita - meio;

    int *vetorEsq = new int[subVetorUm], *vetorDir = new int[subVetorDois];

    for (int i = 0; i < subVetorUm; i++)
    {
        vetorEsq[i] = vetor[esquerda + i];
    }
    for (int j = 0; j < subVetorDois; j++)
    {
        vetorDir[j] = vetor[meio + 1 + j];
    }

    int indSubVetorUm = 0, indSubVetorDois = 0;
    int indVetorMerge = esquerda;

    while (indSubVetorUm < subVetorUm && indSubVetorDois < subVetorDois)
    {
        if (vetorEsq[indSubVetorUm] <= vetorDir[indSubVetorDois])
        {
            vetor[indSubVetorDois] = vetorEsq[indSubVetorUm];
            indSubVetorUm++;
        }
        else
        {
            vetor[indVetorMerge] = vetorDir[indSubVetorDois];
            indSubVetorDois++;
        }
        indVetorMerge++;
    }

    while (indSubVetorUm < subVetorUm)
    {
        vetor[indVetorMerge] = vetorEsq[indSubVetorUm];
        indSubVetorUm++;
        indVetorMerge++;
    }

    while (indSubVetorDois < subVetorDois)
    {
        vetor[indVetorMerge] = vetorDir[indSubVetorDois];
        indSubVetorDois++;
        indVetorMerge++;
    }
    delete[] vetorEsq;
    delete[] vetorDir;
}

void mergeSort(int vetor[], int const inicio, int const fim)
{
    if (inicio >= fim)
    {
        return;
    }

    int meio = inicio + (fim - inicio) / 2;
    mergeSort(vetor, inicio, meio);
    mergeSort(vetor, meio + 1, fim);
    merge(vetor, inicio, meio, fim);
}

void imprimeVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
}

int main()
{

    UINT CPAGE_UTF8 = 65001;
    // UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[] = {9, 10, 6, 8, 5, 0, 1, 4, 3, 2, 7};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    cout << "Vetor antes da ordenação: \n";
    imprimeVetor(vetor, tamanho);

    cout << "\n\nVetor depois da ordenação: \n";
    mergeSort(vetor, 0, tamanho-1);
    imprimeVetor(vetor, tamanho);
}
