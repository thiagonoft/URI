/*

Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 50) indicando o número de células no tabuleiro. 
O tabuleiro é dado nas próximas N linhas. 
A i-ésima linha seguinte contém 0 se não existe mina na i-ésima célula do tabuleiro e 1 se existe uma mina na i-ésima célula do tabuleiro.

Saída
A saída é composta por N linhas. A i-ésima linha da saída contém o número de minas explosivas nos arredores da i-ésima célula do tabuleiro.

*/


#include <stdio.h>

int main(void) {
  int N, i, x, minas;
  scanf("%d", &N);

  // inicializa o vetor e o preenche com os inputs
  unsigned short int tabuleiro[N];
  for(i=0; i < N; i++)
    scanf("%hu", &tabuleiro[i]);

  if(N==1){
    printf("%d\n", tabuleiro[0]);
  }
  else{
      //condicional para o primeiro e ultimo elementos. verifica o termo anterior, o proximo e ele mesmo e soma para obter a quantidade de minas nas proximidades
    for(x=0; x < N; x++){
      minas = 0;
      if(x==0)
        minas += tabuleiro[0] + tabuleiro[1];
      else if(x==N-1)
        minas += tabuleiro[N-1] + tabuleiro[N-2];
      else
        minas += tabuleiro[x-1] + tabuleiro[x] + tabuleiro[x+1];
      printf("%d\n", minas);
    }
  }
  

}
