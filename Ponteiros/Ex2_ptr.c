#include <stdio.h>

void troca_valor(int a, int b);
void troca_referencia(int *a, int *b);

int main()
{

	int a = 0, b = 1;

	troca_valor(a, b); // Não ira realizar a troca por ser uma passagem por valor;
	printf("a = %d\nb = %d\n", a, b);

	troca_referencia(&a, &b); // Irá trocar os valores, por ser uma passagem por referencia;

	printf("a = %d\nb = %d\n", a, b);

	return 0;
}

void troca_valor(int a, int b)
{

	int temp = a;
	b = temp;
	a = b;
}

void troca_referencia(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
