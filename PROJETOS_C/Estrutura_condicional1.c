#include <stdio.h>

int main (void)
{
	float nota;
	printf ("Digite a nota: ");
	scanf("%f", &nota);
	printf("%.2f\n",nota); // Formatado para 2 casas decimais
	if (nota >= 5) //Condição
		printf("Parabéns você foi aprovado\n");
	if (nota < 5) // Condição
		printf("Não deu desta vez, mas não desista!\n");
	return 0;
}
