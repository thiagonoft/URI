/*

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. 
O final da entrada é marcado por um valor de ordem igual a zero (0).

Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. 
Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço. 
Após o último caractere de cada linha da matriz não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.

*/

#include <stdio.h>

int main(void) {
int N, inicio, fim, numero;
while(1) {
  scanf("%d", &N);
  unsigned short int m[N][N];
  inicio=0;
  fim=N;
  numero=1;

  // condicao de parada
  if(N==0)
    break;
  else{

    // loop que preenche a matriz de tamanho N toda com 1, depois uma matriz de tamanho N-2 com 2...
    while(1){

      for(int i=inicio; i<fim; i++){
        for(int j=inicio; j<fim; j++){
          m[i][j] = numero;
        }
      }

      if(fim==0)
        break;

      fim -= 1;
      inicio += 1;
      numero += 1; 
    }


    // loop para printar cada elemento da matriz justificado à direita com tamanho 3
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        if(j==0)
          printf("%3d", m[i][j]);
        else
          printf(" %3d", m[i][j]);
      }

      printf("\n");
    }

    printf("\n");
  }
}

}
