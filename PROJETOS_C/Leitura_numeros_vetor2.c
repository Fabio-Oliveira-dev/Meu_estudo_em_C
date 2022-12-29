#include <stdio.h>
int main() {                                            
    const int tamvet=2, tamlista=2; // Constante de 2 variaveis
    int vet[tamvet],numero,posicao,posvet,achou;

    // Entrada
    printf ("\n Digite os dados para o vetor \n");
    for (posicao=0;posicao<tamvet;posicao++)
    {     
        scanf ("%d",&vet[posicao]);
    }
    printf ("\n Digite os numeros da lista: \n");
    for (posicao=1;posicao<=tamlista;posicao++)
    {    
        printf("\n Digite um numero: ");
        scanf ("%d",&numero);
        // verifica se o numero está no vetor        
        posvet=0;        
        achou=0;        
        while (posvet<=tamvet-1 && achou==0)
        {    
            if (numero==vet[posvet])    
                achou=1;                
            else
                posvet=posvet++;    
        }
        if (achou==1)   
            printf("Achou na posicao: %d", posvet);
        else
            printf("Nao achou o numero: ");
    }      
}