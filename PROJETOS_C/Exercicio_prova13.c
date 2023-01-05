// Considere o seguinte programa escrito em C. Imagine também que antes da função main
//foram declaradas todas as bibliotecas relacionadas às instruções.
// Entrado letra 'd'.
// Saída Caractere = D

int main()
{
char letra;
printf("Entre com uma letra minuscula:\n");
scanf("%c", &letra);
letra = letra + ( 'A' - 'a' );
printf("Caractere = %c \n", letra);
return 0;
}
