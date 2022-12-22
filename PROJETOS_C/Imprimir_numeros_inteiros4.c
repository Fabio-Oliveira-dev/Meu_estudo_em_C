#include<stdio.h>
#include<stdlib.h>
int main()
{
//Sintaxe geral do comando FOR
//for (inicialização; condição; incremento_decremento)
int num, cont;
printf("Digite um numero: ");
scanf("%d", &num);
for (cont=1; cont<=20; cont=cont+1)
{
//Bloco ou sequência de comandos a ser repetida
    printf("\n Numero = %d", num);
}
return 0;
// comando após a repetição
}
