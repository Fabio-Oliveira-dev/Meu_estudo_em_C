#include<stdio.h>
int main()  
{
    const int tamvet=5; // Constante para facilitar a troca de condição
    int vet[tamvet], ind; //ind é a posição que o elemento ocupa
    for(ind=0;ind<=tamvet;ind++)
    {
        scanf("%d", &vet[ind]); // Usuario gisita um valor
        vet[ind]=vet[ind]+2; // incrementa de 2 unidades o valor digitado pelo usuario
        printf("%d", vet[ind]); // Imprime valor do usuario e acrescenta somando + 2
        
    }
}