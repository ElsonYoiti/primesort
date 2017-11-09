/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
int primo (int valor)
    {
        int i, flag_primo=0;
        for (i=1; i<valor; i++)
        {
            if (valor%i==0) flag_primo++;
        }
        if (flag_primo==1 || valor == 1 || valor == 0) return 1;
        else return 0;
    }

void BubbleSort (int vetor[], int n)
{
int k, j, aux,l;
for (k = 1; k < n; k++)
    {
    for (j = 0; j < n - 1; j++)
        {
        if (vetor[j] > vetor[j + 1])
            {
            aux          = vetor[j];
            vetor[j]     = vetor[j + 1];
            vetor[j + 1] = aux;
            }
        }
    }
for (l=n-1; l>=0; l--)
{
    printf ("%d ", vetor[l]);
}
}

int main ()
{
int vet [200000];
int i,j, pre_vet,decod_primo,a=0;

for (i=0;i<200000;i++)
    {
    scanf ("%d", &pre_vet);
    if (pre_vet == -1) break;
    decod_primo = primo(pre_vet);
    if (decod_primo ==1)
        {
        vet[i] = pre_vet;
        a++;
        }
    if (decod_primo == 0) i--;
    }
BubbleSort(vet,a);
return 0;
}

