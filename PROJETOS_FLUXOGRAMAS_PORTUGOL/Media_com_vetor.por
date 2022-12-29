programa
{
	
	funcao inicio()
	{
		real vet[20], soma=0, media
		inteiro posicao
		para (posicao=0;posicao<20;posicao++)
		{
			leia (vet[posicao])
			soma = soma+vet[posicao]
			
		}
		media = soma/20
		para (posicao=0;posicao<20;posicao++)
		{
			se (vet[posicao] >= media)
			escreva (vet[posicao], "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 80; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */