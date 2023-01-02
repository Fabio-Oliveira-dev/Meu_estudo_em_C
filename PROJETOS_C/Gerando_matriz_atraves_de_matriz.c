#include <stdio.h>                          

int main() {

    int mat[4][4],mat2[4][4],lin,col;

    printf ("\nDigite os valores dos elementos das matriz original.\n");

    // Matriz 1
    for (lin=0;lin<4;lin++)
        for (col=0;col<4;col++)
        {
            scanf ("%d",&mat[lin][col]);
            mat2[col][lin]=mat[lin][col];
        } 
    
    printf ("\nListagem dos elementos das matrizes\n");

    for (lin=0;lin<4;lin++)
    {
        for (col=0;col<4;col++)
        printf("Elementos da Matriz 1 Linha[%d] Coluna[%d] = %d\n",lin,col,mat[lin][col]);
    }

    for (lin=0;lin<4;lin++)
    {
        for (col=0;col<4;col++)
            printf("%d ",mat2[lin][col]);
        printf("\n");
    }

    return 0;
}