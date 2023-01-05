// Considere o seguinte código escrito em linguagem C:
// Entrada 2  4  8  5  7
// Saída 14

#include<stdio.h>
int main()
{
int num,ind,soma=0;
for (ind=1;ind<=5;ind++)
{ scanf ("%d",&num);
   if (num%2 == 0)
       soma=soma+num;
}  
 printf("%d \n",soma);
}