#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n = 1, i=0, j=0;

	scanf("%d", &n);

	int cont = 1;

	while(n){

		for(i=0; i<n-1; i++){
			
			printf(" ");
		}
		for(j=0; j<cont; j++){

			printf("*");
		}

		if(n>1){
			printf("\n");
		}
		
		cont+=2;
		n--;
	}
	printf("\n");
	return 0;
}