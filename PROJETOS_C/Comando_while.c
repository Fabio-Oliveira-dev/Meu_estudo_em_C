#include<stdio.h>
#include<stdlib.h>
int main ()
{
    float nota1, nota2, nota3, media;
    int cont = 1;

    // Inicializador - Condição - Incrementação
    while (cont<=2)
    {    
            printf("Digite a nota 1 do aluno. \n");
            scanf("%f", &nota1);
            printf("Digite a nota 2 do aluno. \n");
            scanf("%f", &nota2);
            printf("Digite a nota 3 do aluno. \n");
            scanf("%f", &nota3);

            media = (nota1+nota2+nota3)/3;
            
            if (media>=7)
                printf("Aluno aprovado com media. %.2f \n", media);
            else
                printf("Aluno reprovado com media. %.2f \n", media);
            cont++;
    }
    return 0;
}