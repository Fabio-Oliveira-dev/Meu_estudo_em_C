#include<stdio.h>
#include<stdlib.h>
int main()
{

    float percreaj, salario, salarioreaj, maiorsal;
    int cont;
    maiorsal=0;

    printf("Percentual de reajuste salarial: \n");
    scanf("%f", &percreaj);

        for (cont=1; cont<=2; cont++)
        {
            printf("Informe o salario do funconario: \n");
            scanf("%f", &salario);
            salarioreaj = salario + (salario * percreaj) / 100;
            printf("O salario com o reajuste sera de: %.2f \n", salarioreaj);
            if (salarioreaj>maiorsal);
            maiorsal=salarioreaj;
        }
    printf("maior salario com reajuste e: %.2f \n", maiorsal);
    return 0;
}