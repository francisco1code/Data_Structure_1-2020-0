#include<stdio.h>
#define MAX 1000000
#define MAX2 1000

int main(int argc, char const *argv[])
{
	int N, K, aux=0,x=0,menor=MAX;
	int fig[MAX2] = {0};

	scanf("%d %d", &N, &K);

	aux = N;

	while(aux){
		scanf("%d", &x);
		fig[(x-1)]++;
		aux--;
	}

	for(int i=0;i<K;i++){
		//printf("%d\n", fig[i]);
		if(fig[i]<menor){
			menor = fig[i];
		}
	}

	printf("%d\n", menor);

	return 0;
}