#include <stdio.h>
#include <stdlib.h>

int Pesquisa_Sequencial(int *vet, int busca , int n);

int main()
{
    int n = 100000;
    int vet[n];
    int i,posicao;
    int busca;
    for (i=0; i<n; i++)
    {
        vet[i] = rand() % 100;
    }
    for (i=0; i<n; i++)
    {
        printf("%d\n",vet[i]);
    }
    printf("\n Digite qual valor voce deseja procurar:");
    scanf("%d",&busca);
    posicao = Pesquisa_Sequencial(vet, busca , n);
    if ( posicao != -1 )
    {
        printf("\n Valor encontrado!\n ");
        printf("%d\n",posicao);
    }
    else
        printf("\n Valor nao encontrado!\n\n ");
    system("pause");
}

int Pesquisa_Sequencial(int *vet, int busca , int n)
{
     int i;
     for ( i=0; i < n; i++ )
     {
         if ( busca == vet[i] )
             return i;
     }
     return -1;
}
