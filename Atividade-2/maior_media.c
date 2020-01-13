#include<stdio.h>

int main(){

	int N, num, media=0,quant=0;
	scanf("%d", &N);
	int vet[N];

	for(int i=0;i<N;i++){
		scanf("%d", &vet[i]);
		media += vet[i];
	}

	media = media/N;

	for(int i=0;i<N;i++){
		if(vet[i]>media){
			quant++;
		}
	}


	if(!quant){
		printf("%d\n", quant);
	}
	else{

		for(int i=0;i<N;i++){
			if(vet[i]>media){
				quant--;
				printf("%d", vet[i]);
				if(quant>0){
					printf(" ");
				}
				else{
					printf("\n");
					break;
				}
			}
		}

	}
	return 0;
}