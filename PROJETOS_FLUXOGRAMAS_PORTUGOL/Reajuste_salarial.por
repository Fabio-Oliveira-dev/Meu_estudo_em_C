programa
{
	
	funcao inicio()
	{
	real percrealj, salario, salarioreaj, maiorsal
	inteiro cont
	maiorsal = 0
	escreva ("Percentual de reajuste salarial: ")
	leia (percrealj)
	
	para (cont+1; cont<=50; cont++)
	{
		escreva("\nInforme o salario do funcionario: ")
		leia(salario)
		salarioreaj = salario + (salario*percrealj / 100)
		escreva("\nSalario reajustado e:", salarioreaj)
		se (salariorealj>maiorsal)
		maiorsal=salariorealj
	}
	escreva("\nO maior salario reajustado e:", maiorsal)
	}
	
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 182; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */