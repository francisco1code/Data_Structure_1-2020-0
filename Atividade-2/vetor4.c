#include<stdio.h>

int main(int argc, char const *argv[])
{
	int N,num,cont=0;
	scanf("%d", &N);
	int vet[N];
	for(int i=0;i<N;i++){
		scanf("%d", &vet[i]);
	}	
	scanf("%d", &num);

	for(int i =0;i<N;i++){
		if(vet[i]==num){
			printf("pertence\n");
			cont++;
			break;
		}
	}

	if(!cont){
		printf("nao pertence\n");
	}
	return 0;
}