#include<stdio.h>

int main(){

	int N, num, even=0,odd=0, cont1=0,cont2=0;
	scanf("%d", &N);

	int vet[N];

	for(int i=0;i<N;i++){
		scanf("%d", &num);
		if(num%2==0){
			even++;
		}
		else{
			odd++;
		}
		vet[i] = num;
	}

	for(int i=0;i<N;i++){
		if(vet[i]%2==0){
			even--;
			printf("%d", vet[i]);
			if(even>0){
				printf(" ");
			}
			else{
				//printf("\n");
				break;
			}
		}
	}
	printf("\n");
	for(int i=0;i<N;i++){
		if((vet[i]%2)!=0){
			odd--;
			printf("%d", vet[i]);
			if(odd>0){
				printf(" ");
			}
			else{
				//printf("\n");
			}
		}
	}

	printf("\n");


	return 0;
}