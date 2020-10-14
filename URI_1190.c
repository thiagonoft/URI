#include <stdio.h>


int main()
{
    char O;
    scanf("%c", &O);
    long double m[12][12], soma=0.0;
    int i,j,k,l;
    
    // preenche a matriz com os numeros dados no input
    for(i=0; i < 12; i++){
        for(j=0; j < 12; j++){
            scanf("%Lf", &m[i][j]);
        }
    }
    
    // calcula a soma dos elementos à direita à cima
    for(k=0; k < 6; k++){
        for(l=0; l < k; l++){
            soma += m[k][11-l];
        }
    }
    
    //calcula a soma dos elementos à direita à baixo
    for(k=0; k < 6;k++){
      for(l=5; l > k; l--){
        soma+= m[k+6][l+6];
      }
    }
    
    if(O=='S')
        printf("%.1Lf\n", soma);
    else{
        soma = soma/30;
        printf("%.1Lf\n", soma);
    }
    
    return 0;
}