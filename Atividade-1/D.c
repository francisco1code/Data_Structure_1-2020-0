#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	int n, maior;

	scanf("%d", &maior);

	while(scanf("%d", &n)!=EOF){
		if(n>maior){
			maior = n;
		}
	}
	
	printf("%d\n", maior);

	return 0;
}