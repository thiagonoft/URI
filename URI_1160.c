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