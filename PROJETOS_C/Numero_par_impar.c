// Desisão aninhada
#include<stdio.h>
int main(){
int a, scanf("%d", &a);
if (a<0){
    printf("\nNumero negativo! ");
    if(a%2==0) printf("Par.");
    else printf("Impar.");
}   else {
    printf("\nNumero positivo! ");
    if (a%==0) printf("Par.");
    else printf("Impar.");
}


//Operador ternario, operadores de desisão if(?), else(:)
const char* reultado =
    (a<0)?
    ((a%2==0)?"\nNegativo Par":"\nNegativo Impar"):((a%2==0)?"\nPositivo par":"Positivo Impar");
    printf(resultado);
}

