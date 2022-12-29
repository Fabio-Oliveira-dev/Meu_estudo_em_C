#include<stdio.h>
int main()
{
    // Entrada
    const int tamvet=5;
    float vet[tamvet], soma=0, media; int posicao;

    // Processamento
    for (posicao=0;posicao<tamvet;posicao++)
    {
        scanf("%f",&vet[posicao]);
        soma = soma + vet[posicao];
    }
    media = soma/tamvet;

    // Saída
    for (posicao=0;posicao<tamvet;posicao++)
    {
        if (vet[posicao] >= media)
            printf("%.2f\n",vet[posicao]);
    }

    return 0;
}