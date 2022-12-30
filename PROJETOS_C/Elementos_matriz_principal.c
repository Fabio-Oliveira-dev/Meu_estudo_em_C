#include<stdio.h>
int main()
{
    int matriz[4][4],lin,col;
    printf("\nDigite os valotes para os elementos da matriz \n");
    for(lin=0;lin<4;lin++)
        for(col=0;col<4;col++)
            if (lin==col)
            {
                printf("Elemento[%d] [%d] = 0 \n", lin, col);
                matriz[lin][col]=0;
            }
            else
            {
                printf("Elemento [%d] [%d] = ", lin, col);
                scanf("%d",&matriz[lin][col]);
            }
    printf("\nListagem dos elementos da matriz: \n");
    for(lin=0;lin<4;lin++)
        for(col=0;col<4;col++)
            printf("\nElemento Linha[%d] Coluna[%d] = %d \n",lin, col, matriz[lin][col]);
    return 0;
}