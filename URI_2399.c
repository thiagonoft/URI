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