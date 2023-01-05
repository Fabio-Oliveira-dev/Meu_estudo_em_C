#include<stdio.h>
void main()
{
    char cha1, cha2;
    printf("Entre com 2 letras \n");
    scanf("%c %c", &cha1, &cha2);
    cha1 = cha2;
    cha2 = cha1;
    printf("Cha1 = %c e cha2 = %c \n",cha1,cha2);

}