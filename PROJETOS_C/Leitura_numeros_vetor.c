#include<stdio.h>
int main()
{
    // Inicialização
    const int tamvet=5; // Constante para mudar o valor com vacilidade (definir o vetor)
    int vet1[tamvet],vet2[tamvet],posicao; // 2 Variaveis vet e variavel posicao para condição
    
    // Entrada
    for (posicao=0;posicao<tamvet;posicao++)
    {
        scanf("%d", &vet1[posicao]); // Ler Vet1 junto com a condição que é o posicao
        if (vet1[posicao]% 2 == 0)
        vet2[posicao] = vet1[posicao] + 1; // vet2 vai receber vet1 + 1 unidade
        else
            vet2[posicao] = vet1[posicao] - 1; // vet2 vai receber vet1 - 1 unidade
    }

    // Saída
    printf("Elementos de vet1 e vet2: ");
    for (posicao=0;posicao<tamvet;posicao++)
    {
        printf("%d\n",vet1[posicao]);
        printf("%d\n",vet2[posicao]);
    }
    return 0;
}