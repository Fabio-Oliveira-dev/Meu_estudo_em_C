programa
{
	
	funcao inicio()
	{
		inteiro vet[5] = {0,0,0,0,0}, posicao
		caracter letra
		leia (letra)
		enquanto (letra!='z')
		{
			escolha (letra)
			{
			caso 'a':
        			vet[0]++
        			pare;
        		caso 'e':
        			vet[1]++
        			pare;
         		caso 'i':
        			vet[2]++
        			pare;
        		caso 'o':
        			vet[3]++
        			pare;
        		caso 'u':
        			vet[4]++
        			pare;
			}
			leia (letra);
		}
		escreva ("Quantidade de cada vogal, em ordem: \n");
		para (posicao=0;posicao<=5;posicao++)
		{
			escreva (vet[posicao], " ");
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 130; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */