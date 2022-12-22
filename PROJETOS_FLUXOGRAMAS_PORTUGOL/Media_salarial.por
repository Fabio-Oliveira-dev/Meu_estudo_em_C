programa
{
    funcao inicio()
    {
    	real salario,media,soma,maior
    	inteiro cont
    	maior=0 soma=0
    	para (cont=1;cont<=3;cont++)
	{
		escreva ("Digite o salário do funcionário: ")
		leia (salario)
		soma=soma+salario
		se (salario > maior)
		{
		maior=salario
		}
	}
	media=soma/5
	escreva ("O maior salário da empresa e = ",maior)
     escreva ("\nA média salarial da empresa e = ",media)
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 364; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */