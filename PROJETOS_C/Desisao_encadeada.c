// Desião encadeada
#include<stdio.h>

int main(int argc, char *argv[]){
char sexo;
printf("Qual e o seu sexo? (m/f) ");
scanf("%c", &sexo);

if (sexo == 'f' || sexo == 'F')
    printf("Voce e do sexo feminino ");
else
    if (sexo == 'm' || sexo == 'M')
    printf("Voce e do sexo masculino ");
    else
    printf("Voce digitou um valor invalido ");

}