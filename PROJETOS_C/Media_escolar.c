#include <stdio.h>

int main (void){

    float nota;
    printf ("Digite a nota: ");
    scanf("%f", &nota);
    printf("%.2f\n",nota);
    if (nota >= 0 && nota <= 10){
        if (nota >= 5)
            printf("Parabens, voce foi aprovado!\n");
        else
            printf("Nao desista, voce consegue da proxima vez!\n");
    }
    else
        printf("Erro: media invalida!\n");
    
}
