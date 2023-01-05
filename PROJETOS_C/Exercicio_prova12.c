#include<stdio.h>
int main()
{
int toteu=0, ind;  char letra;

        for (ind=0;ind<16;ind++)
        {

           scanf ("%c ",&letra);

           if (letra=='E' || letra=='U')
              toteu++;
        
        }
        
        printf("%i",toteu);
}