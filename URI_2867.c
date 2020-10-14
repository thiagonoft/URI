// Dados dois números inteiros, n e m, quantos dígitos tem nm ?



#include <stdio.h>
#include <math.h>
 
int quantidadededigitos(int N, int M){
    // retorna a quantidade de digitos do número N^M usando logaritmo na base 10 para calcular.
    return floor(log10(pow(N, M))) + 1;
}

int main() {
    
    int T, N, M;
    scanf("%d", &T);
    for(int i=0; i < T; i++){
        scanf("%d %d", &N, &M);
        int quantidade=quantidadededigitos(N, M);
        printf("%d\n", quantidade);
    }
    
    return 0;
}
