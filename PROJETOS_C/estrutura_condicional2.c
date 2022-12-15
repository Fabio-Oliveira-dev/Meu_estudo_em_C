#include<stdio.h>

int main(){

int cadastrado, ativo, logado; // Variaveis

char opcao; // variavel para capturar a resposta do usuario

cadastrado = ativo = logado = 0; // Variaveis com o valor 0

printf("Deseja cadastrar sua conta? S/N \n");
scanf(" %c", &opcao);

//Condição 1
if (opcao == 's'){
    cadastrado = 1;
    printf("\nConta cadastrada.\n");
}

printf("Deseja ativar sua conta? S/N \n");
scanf(" %c", &opcao);

//Condição 2
if (opcao == 's'){
    ativo = 1;
    printf("\nConta Ativada.\n");
}

printf("Deseja logar sua conta? S/N \n");
scanf(" %c", &opcao);

//Condição 3
if (opcao == 's'){
    logado = 1;
    printf("\nConta Logada.\n");
}

// Na tebale verdade o && (E) só é verdadeiro caso totas as condições for verdadeira
// Se condição é verdadeira ou 1, mostra que o usuario ja está no sistema
if((cadastrado == 1) && ((ativo == 1) || (logado == 1))){
    printf("\nSeja bem vindo.\n");
} else {
    printf("\nAlgo deu errado.\n");
}


}