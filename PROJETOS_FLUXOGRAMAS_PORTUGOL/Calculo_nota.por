programa
{
    funcao inicio()
    {
        real nota1,nota2,nota3,media
        inteiro contalunos
        para (contalunos=1;contalunos<=40;contalunos++)
            {
            escreva("Entre com a nota 1 do aluno: ")
            leia (nota1)
            escreva("Entre com a nota 2 do aluno: ")
            leia (nota2)
            escreva("Entre com a nota 3 do aluno: ")
            leia (nota3)
            media=(nota1+nota2+nota3)/3
            se (media>=7)
            {
                escreva("Aluno APROVADO com média :",media)
            }
            senao
            {
                escreva ("Aluno REPROVADO com média : ",media)
            }
        }
    }
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 615; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */