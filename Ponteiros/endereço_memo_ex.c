#include<stdio.h>

int main(){

	int a;
	
	scanf("%d", &a);
	
	printf("%ld\n", &a);
	
	//Irá mostrar um long int representando o endereço de memória em que a variável se encontra//
	
	printf("%p\n", &a);
	
	//Irá mostrar um Hexadecimal com formatação de ponteiro representando o endereço de memória em que a variável se encontra//

	printf("%x\n", &a);
	
	//Irá mostrar um Hexadecimal representando o endereço de memória em que a variável se encontra//
	
	return 0;
}



