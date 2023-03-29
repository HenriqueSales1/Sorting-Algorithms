// O código utiliza "Insertion Sort" para ordenar um vertor

#include <iostream>
#include <windows.h>

using namespace std;

void insertionSort(int vetor[], int tamanho)
{
    int chave, j;
    for (int i = 1; i < tamanho; i++)
    {
        chave = vetor[i];
        j = i - 1;
        while (j >= 0 && vetor[j] > chave)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
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

int main(){

    UINT CPAGE_UTF8 = 65001;
    // UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[] = {6, 3, 4, 2, 5, 1};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    cout << "Vetor não ordenado: \n";
    for (int i=0; i<tamanho; i++){
        cout << vetor[i] << " ";
    }
    insertionSort(vetor, tamanho);
    cout << "\n\nVetor ordenado: \n";
    imprimeVetor(vetor, tamanho);
}
