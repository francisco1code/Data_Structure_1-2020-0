#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	long long int cpf = 15667890194;
	int d1,d2,d3;

	d1 = cpf/10000000000;
	d2 = cpf/1000000000;
	d3 = d2%d1;
	printf("%d\n", d3);

	return 0;
}