/* 

Entrada
A primeira linha da entrada contém um único inteiro T, indicando o número de casos de teste (1 ≤ T ≤ 3000). 
Cada caso de teste contém 4 números: dois inteiros PA e PB (100 ≤ PA < 1000000, PA < PB ≤ 1000000) indicando respectivamente a população de A e B,
e dois valores G1 e G2 (0.1 ≤ G1 ≤ 10.0, 0.0 ≤ G2 ≤ 10.0, G2 < G1) com um digito após o ponto decimal cada,
indicando respectivamente o crescimento populacional de A e B (em percentual).

Saída
Imprima, para cada caso de teste, quantos anos levará para que a cidade A ultrapasse a cidade B em número de habitantes.
Obs.: se o tempo for mais do que 100 anos o programa deve apresentar a mensagem: Mais de 1 seculo.
Neste caso, acredito que seja melhor interromper o programa imediatamente após passar de 100 anos, 
caso contrário você poderá receber como resposta da submissão deste problema "Time Limit Exceeded".

*\

#include <stdio.h>

 
int main() {
    int T;
    int PA, PB;
    double G1, G2;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
	int count = 0;
        while(PA<=PB){
            PA *= (G1/100.0) + 1.0;
            PB *= (G2/100.0) + 1.0;
            count += 1;
	    if(count > 100){
		printf("Mais de 1 seculo.\n");
                break;
	    }
        }
        if(count <= 100)
            printf("%d anos.\n", count);
    }
    
    return 0;
}
