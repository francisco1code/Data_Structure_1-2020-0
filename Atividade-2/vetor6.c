#include<stdio.h>

int main(int argc, char const *argv[])
{
	int N;
	scanf("%d", &N);
	long long int vet1[N], vet2[N],sum[N];
	long long int num;
	
	for(int i=0;i<N;i++){
		scanf("%lld", &num);
		vet1[i] = num;
	}
	for(int i=0;i<N;i++){
		scanf("%lld", &num);
		vet2[i] = num;
	}
	for(int i=0;i<N;i++){
		sum[i] = vet1[i]+vet2[i];
	}
	for(int i=0;i<N;i++){
		printf("%lld", sum[i]);
		if(i<(N-1)){
			printf(" ");
		}
		else{
			printf("\n");
		}
	}

	return 0;
}