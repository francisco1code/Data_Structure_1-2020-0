#include<stdio.h>

int encaixa(int a, int b){

	int tamanho2=0, div=1, i = 0, power = 1;

	div = b;

	while(div>0){
		div = div/10;
		i++;
	}

	tamanho2 = i;

	for(int i = 0;i<tamanho2;i++){
		power = power*10;
	}

	div = a%power;

	return div == b;
}