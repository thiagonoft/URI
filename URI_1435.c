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