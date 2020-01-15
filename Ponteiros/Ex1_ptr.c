#include<stdio.h>
	
	
int main(){
			
		int x = 41;
		int * ptr = &x; // Declaração de um ponteiro;
		
		printf("Tamanho da variável de ponteiro = %ld\n", sizeof(ptr)); // Independente do tipo retornará 8 bytes, pois ele está guardando apenas o endereço de memória que sempre ocupa 8 ou 4 bytes;
		
		printf("*ptr = %d\n", *ptr); // Mostrará o conteudo de x;
		
		printf("ptr = %ld\n", ptr); // Mostrará o conteúdo de ptr, ou seja o endereço de x;
		
		printf("&ptr = %ld\n", &ptr); // Mostrará o endereço de memória de ptr;
		
		return 0;
}
