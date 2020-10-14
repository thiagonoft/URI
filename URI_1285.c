#include <stdio.h>

    int ultimodigito(int N){
        // verifica se o ultimo digito de um numero é igual a algum dos outros e se for, retorna 1, caso contrario chama a função novamente de forma recursiva até percorrer todos os numeros e retorna 0 caso todos os digitos sejam diferentes
        int resposta = 0;
        int ultimo = N%10;
        int numero = N;
        if(N>=10 && N<100){
            int penultimo = N/10;
            if(ultimo == penultimo){
                resposta = 1;
            }
        }
        else if(N>=100 && N<1000){
            for(int i=0; i<2; i++){
                numero = numero/10;
                if(ultimo == (numero%10)){
                    resposta = 1;
                    break;
                }
            }
            if(resposta == 0)
                return ultimodigito(N/10);
        }
        else if(N>=1000 && N<=5000){
            for(int i=0; i<3; i++){
                numero = numero/10;
                if(ultimo == (numero%10)){
                    resposta = 1;
                    break;
                }
            }
            if(resposta == 0)
                return ultimodigito(N/10);
        }
        return resposta;
    }

int main() {
 

    int N, M;
    while (scanf("%d %d",&N,&M) != EOF){
        int count = 0;
        for(N; N <= M; N++){
            if(ultimodigito(N) == 0){
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}