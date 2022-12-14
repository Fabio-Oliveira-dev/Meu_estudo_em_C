#include <stdio.h>
int main(){
char ch1, ch2;
printf("Entre com duas letras:\n");
scanf(" %c", &ch1); // Espaço antes do simbolo de leitura para não ler o enter como caracter
fflush(stdin); // Limpeza do buffer do teclado
scanf(" %c", &ch2);
printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
return 0;
}
