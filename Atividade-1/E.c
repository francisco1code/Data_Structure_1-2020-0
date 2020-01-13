#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n, n1, n2;
	int cont=1;

	scanf("%d", &n);

	n1 = n;

	while(n1){

		for(int i=0;i<cont;i++){
			printf("%.02d", cont);
			
			if(i<cont-1){
				printf(" ");
			}
		}
		printf("\n");

		cont++;
		n1--;
	}

	cont = 1;
	n2 = n;


	printf("\n");

	while(n2){
		for(int i=0;i<cont;i++){
				printf("%.02d", i+1);
			if(i<cont-1){
				printf(" ");
			}
		}
		printf("\n");
		cont++;
		n2--;
	}



	return 0;
}