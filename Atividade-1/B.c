#include<stdio.h>

int main(int argc, char const *argv[])
{
	int cont = 0;
	long int num;


	while(scanf("%ld", &num)!=EOF){
		cont++;
	}

	printf("%d\n", cont);

	return 0;
}