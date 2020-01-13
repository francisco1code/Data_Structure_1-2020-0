#include<stdio.h>

int main(int argc, char const *argv[])
{

	int consumo,valor=0;

	scanf("%d", &consumo);

	if(consumo>100){
		valor += 167+(consumo - 100)*5;
	}
	else if(consumo>30){
		valor += 27+(consumo - 30)*2;
	}
	else if(consumo>10){
		valor += 7+(consumo - 10);
	}
	else{
		valor = 7;
	}
	
	printf("%d\n", valor);

	return 0;
}