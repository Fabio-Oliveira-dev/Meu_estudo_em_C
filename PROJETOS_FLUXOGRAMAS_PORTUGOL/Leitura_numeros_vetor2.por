programa
{
	
	funcao inicio()
	{
		// Inicialização
		const inteiro tamvet=2, tamlista=2
		inteiro vet[tamvet],numero,posicao,posvet,achou

		// Entrada
		escreva("Digite os dados do vetor: \n")
		
		para (posicao=0;posicao<tamvet;posicao++)
		{
			leia (vet[posicao])
		}

		// Saída
		para (posicao=1;posicao<=tamlista;posicao++)
		{
			escreva ("\nDigite um numero: ")
			leia (numero)
			// Verificar se o numero esta no vetor
			posvet=0
			achou=0

			enquanto (posvet<=tamlista e achou==0)
			{
				se (numero==vet[posvet])
					achou=1
				senao 
					posvet=posvet++
			}
			se (achou==1)
				escreva ("Achou na posicao: ", posvet)
			senao
				escreva ("Nao achou o numero")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 376; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */