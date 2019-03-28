#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define lim 100000

int somaD(char num[lim + 19]){
    int somaR = 0, i;
    for(i = 0; num[i] != 0; i++){
        somaR += num[i] - '0';
        if(somaR >= 10){
            somaR -= 9;
        }
    }
    return somaR;
}

int somaC(int num, int x){
    int i, soma = 0;
    for(i=0; i < x; i++){
			soma += num;
      if(soma >= 10){
        soma -= 9;
      }
    }
    return soma;
}

int main() {

    int n, k, soma = 0, i;
    char num[lim + 19];
    scanf(" %s", num); 
		scanf("%d", &k);
    n = somaD(num);
		soma = somaC(n, k);
    printf("%d", soma);
	return 0;
}