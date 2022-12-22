#include<stdio.h>
#include<stdlib.h>
int main()
{
    int cont, n, num, somapar, somaimpar;
    somapar=0;
    somaimpar=0;

    printf("Digite a quantidade de numeros da lista: \n");
    scanf("%d", &n);
    
    //(inicialização, condição, incremento);
    for (cont=1; cont<=n; cont++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        if (num%2==0)
            somapar=somapar+num;
        else
            somaimpar=somaimpar+num;
    }
    printf("A soma dos numeros pares e: %d \n", somapar);
    printf("A soma dos numeros impares e: %d \n", somaimpar);
    return 0;
}