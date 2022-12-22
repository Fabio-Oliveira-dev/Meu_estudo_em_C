// Comando While

#include<stdio.h>
#include<stdlib.h>

int main(){
    int cont, num, maior;
    maior = 0;
    cont = 1; // Inicialização

    while (cont<=2) // Enquanto
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);

        if (num > maior)
        {
            maior = num;
        }
        cont++; // Incremento dentra da repetição sendo o ultimo comando
    }
    printf("O maior numero foi: %d \n", maior);
    return 0;
}