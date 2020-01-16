#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	unsigned long long int cpf, d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11; 
	int soma=0, ver1=0, ver2=0, resto=0;

	scanf("%llu", &cpf);

	d1 = cpf/10000000000;
	d2 = cpf/1000000000;
	d2 = d2%10;
	d3 = cpf/100000000;
	d3 = d3%10;
	d4 = cpf/10000000;
	d4 = d4%10;
	d5 = cpf/1000000;
	d5 = d5%10;
	d6 = cpf/100000;
	d6 = d6%10;
	d7 = cpf/10000;
	d7 = d7%10;
	d8 = cpf/1000;
	d8 = d8%10;
	d9 = cpf/100;
	d9 = d9%10;
	d10 = cpf/10;
	d10 = d10%10;
	d11 = cpf%10;

	soma = (d1*10);
	soma += (d2*9);
	soma += (d3*8);
	soma += (d4*7);
	soma += (d5*6);
	soma += (d6*5);
	soma += (d7*4);
	soma += (d8*3);
	soma += (d9*2);

	resto = soma%11;
	ver1 = 11 - resto;

	if (ver1>9){
		ver1 = 0;
	}

	if (ver1 != d10){
		printf("invalido\n");
	}
	else{

		soma = (d1*11)+(d2*10)+(d3*9)+(d4*8)+(d5*7)+(d6*6)+(d7*5)+(d8*4)+(d9*3)+(ver1*2);

		resto = soma%11;
		ver2 = 11 - resto;

		if (ver2>9){
			ver2 = 0;
		}

		if (ver2 == d11){
			printf("valido\n");
		}
		else{
			printf("invalido\n");
		}
	}

	return 0;
}