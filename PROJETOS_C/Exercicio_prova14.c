// Considere o seguinte programa escrito em C. Lembre-se que o operador % significa
//resto da divisão inteira.
// Entrada valor 5
// Saída num = 7

#include<stdio.h>
void main(){
int num;
printf("Entre com um inteiro:\n");
scanf("%d", &num);
num = num + num%3;
printf("num = %d \n", num);
}
