//Considere um trecho de código que lê um conjunto de 16 letras e as armazena
//em um vetor de caracteres. O código deve contabilizar quantas vezes apareceram
//as vogais "E" e "U" em uma variável toteu.
//Assinale a alternativa que apresenta o trecho de código correto:
//A resposta correta é: O código abaixo

int main() {
    
int toteu=0, ind;  char letra;
        for (ind=0;ind<16;ind++)
        {
           scanf ("%c ",&letra);
           if (letra=='E' || letra=='U')
              toteu++;
        
        }
        
        printf("%i",toteu);
}
