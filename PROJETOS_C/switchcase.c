// Switchcase

#include<stdint.h>
    int main(){
    int opcao;
    printf("Entre com um numero inteiro: ", opcao);
    scanf("%d", &opcao);

    switch (opcao){
        case 1:{
            printf("numero 1");
            break;
        }
        case 2:{
            printf("numero 2");
            break;
        }
        default: printf("numero 3");
    }

    printf("\nFinal do programa");


}