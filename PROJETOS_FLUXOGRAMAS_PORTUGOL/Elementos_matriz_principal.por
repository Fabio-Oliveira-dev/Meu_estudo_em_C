programa
{
	
	funcao inicio()
	{
		inteiro matriz[4][4],lin,col
		para (lin=0;lin<4;lin++)
			para (col=0;col<4;col++)

				se (lin==col)
				{
					matriz[lin][col]=0
				}
				senao
					leia (matriz[lin][col])
			
		para (lin=0;lin<4;lin++)
			para (col=0;col<4;col++)
				escreva ("Matriz principal são: \n", matriz[lin][col])
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 330; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */