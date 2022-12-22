#include<stdint.h>
int main(){

float nota1, nota2, nota3, media;
int contalunos;

if (contalunos=1, contalunos<=40, contalunos++){
    printf("\nDigite a nota 1 do aluno: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2 do aluno: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3 do aluno: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3) /3;
    if (media>=7){
        printf("\nAluno aprovado com media: %.2f", media);
    } else {
        printf("\nAluno reprovado com media: %.2f", media);
    }
}
}