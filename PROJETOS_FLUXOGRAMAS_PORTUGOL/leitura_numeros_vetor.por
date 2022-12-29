programa
{
	
	funcao inicio()
	{
		const inteiro tamvet=2 // Uma constante para mudar condição com facilidade. // Constante Inicializador
		inteiro vet1[tamvet], vet2[tamvet], posicao
		para (posicao=0;posicao<tamvet;posicao++)
		{
			leia (vet1[posicao]) // Entrada
			se (vet1[posicao]%2==0)
				vet2[posicao] = vet1[posicao]+1
			senao 
				vet2[posicao] = vet1[posicao]-1
		}
		escreva ("Cada elemento de vet1 e vet2: \n")
		para (posicao=0;posicao<tamvet;posicao++) // Saída
		{
			escreva (" \n",vet1[posicao])
			escreva (vet2[posicao],"\n\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 91; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */