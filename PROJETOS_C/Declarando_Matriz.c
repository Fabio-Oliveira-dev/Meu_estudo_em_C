// Declarando uma matriz
// Colchete 1 são [3] linhas, colchete 2 são [5] colunas
// Chave 1, linha 1, chave 2, linha 2, chave 3, linha 3
int mat_num [3][5] = {{0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14}}

//Outro exemplo
int numeros[100][200];
float notas [20][30];
char vogais [5][10];

// Outro exemple de inicialização durante a declaração
int numeros[3][5] = {{10,12,14,16,18},{0,9,8,6,5},{11,12,13,14,15}};
//ou
int numeros[3][5];
numeros = {{10,12,14,16,18},{0,9,8,6,5},{11,12,13,14,15}};

// Elementos de matriz são acessados, atribuídos, lidos ou exibidos, elemento a elemento
// Matriz 3x5 (3 linhas x 5 colunas) de elementos do tipo inteiro, de nome mat
mat[3][5];
1 mat [0][0] = 1;
2 mat [0][1] = 2;
3 mat [0][2] = 3;
4 mat [0][3] = 4;
5 mat [0][4] = 5;
6 mat [1][0] = 6;
7 mat [1][1] = 7;
8 mat [1][2] = 8;
9 mat [1][3] = 9;
10 mat [1][4] = 10;
11 mat [2][0] = 11;
12 mat [2][1] = 12;
13 mat [2][2] = 13;
14 mat [2][3] = 14;
15 mat [3][3] = 15;

printf(“%d Linha 2, coluna1:“, mat[2][1]);

scanf ("%d",&mat[2][0]);

// Atribuir valor a um elemento
Mat[2][4]=90;

// Leitura do dado do dispositivo de entrada em uma variável
scanf ("%d",&num);
mat[1][2]=num;