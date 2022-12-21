//Estrutura condicional de desisão aninhada composta. Uma estrutura if dentro de outra
//estrutura if

if (EXPRESSAO_CONDICIONAL_1){
    if(EXPRESSAO_CONCIDIONAL_2){
        BLOCO_INSTRUCAO_1;
    } else {
        BLOCO_INSTRUCAO_2;
    }
}

//Estrutura de desisão aninhada

if(EXPRESSAO_CONDICIONAL_1){
    if(EXPRESSAO_CONCIDIONAL_2){
        BLOCO_INSTRUCAO_1;
    } else {
        BLOCO_INSTRUCAO_2;
    } { else {
    EXPRESSAO_CONCIDIONAL_3
       BLOCO_INSTRUCAO_3;
} else {
    BLOCO_INSTRUCAO_4;
    }
}

//um if simples ser um comando de uma estrutura else

if(EXPRESSAO_CONDICIONAL_1){
    BLOCO_INSTRUCAO_1;
} else {
    if(EXPRESSAO_CONCIDIONAL_2){
        BLOCO_INSTRUCAO_2;
    }
}