// encadeamento de estruturas if/else

#include<stdint.h>
int main(){
int opcao;
printf("Entre com um numero inteiro: ", opcao);
scanf("%d", &opcao);
    
    if (opcao >= 0){
        //Aninhamento if/else
        if (opcao == 0){
            printf("Numero nulo! ");
        } 
        else
            printf("Numero positivo! ");   
    } 
    else
        printf("Numero negativo! ");
}
