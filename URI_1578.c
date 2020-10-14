/*

Entrada
A primeira linha da entrada é constituída por um único inteiro positivo N (N ≤ 100), o qual designa o número de matrizes cujos “quadrados” ainda não foram calculados. 
Em seguida ocorre a descrição de cada uma das N matrizes. 
A primeira linha da descrição de uma matriz consiste de um único inteiro M (1 ≤ M ≤ 20), o qual representa o número de linhas e o número de colunas da matriz. 
Seguem, então, M linhas, cada uma com M inteiros aij (0 ≤ aij ≤ 232-1, 1 ≤ i,j ≤ M), os quais correspondem às células da matriz, 
de modo que valores consecutivos numa mesma linha são separados por um espaço em branco.

Saída
Imprima o “quadrado” de cada matriz da entrada, conforme o que Atrapalhilton entende pelo “quadrado” de uma matriz. 
Antes de imprimir cada “quadrado”, imprima a linha “Quadrado da matriz #x:” (sem as aspas), 
para ajudar Atrapalhilton a não se perder na hora de passar a limpo os resultados para o caderno. 
Comece a contagem em x = 4, afinal, Atrapalhilton já calculou os “quadrados” das 3 primeiras matrizes. 
Adicione tantos espaços em branco à esquerda de cada valor quanto necessários para que os valores de uma mesma coluna fiquem todos alinhados à direita, 
de modo que haja ao menos um valor em cada coluna não precedido por espaços em branco além do espaço em branco obrigatório que separa colunas consecutivas. 
Imprima também uma linha em branco entre “quadrados” de matrizes consecutivas.

*/

#include <stdio.h>
#include <math.h>






int main(void)
{
    unsigned short N, casos=4, x, i, j, k, c, digitos;
    long double maior;
    scanf("%hu", &N);
    for(x=0; x < N; x++){
        
        scanf("%hu", &c);
        long double m[c][c];
        
        //preenche a matriz e eleva o termo ao quadrado
        for(i=0; i<c; i++){
            for(j=0; j<c; j++){
                scanf("%Lf", &m[i][j]);
                m[i][j] *= m[i][j];
            }
        }
        
        
        printf("Quadrado da matriz #%hu:\n", casos);
        for(i=0; i<c; i++){
            for(j=0; j<c; j++){
                
                // acha o maior numero da coluna
                maior=0;
                for(k=0; k < c; k++){
                    if (m[k][j] > maior)
    					maior = m[k][j];
                }
                digitos = ((floor(log10(maior))) + 1);
                
                if (j != c && j != 0)
    				printf(" ");
    				
	    			printf("%*.Lf", digitos, m[i][j]);
            }
            printf("\n");
        }
        casos++;
        if(x != N-1)
            printf("\n");
    }


}
