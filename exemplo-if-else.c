/* Fazer um programa que leia um inteiro e verifique se esta no intervalo [1,100]*/

#include<stdio.h>

int main(){

	int x;

	scanf("%d", &x);

	if(x>1 && x<100) 
		printf("OK\n");
	
	else
		printf("NÃO\n");
	
	return 0;
}