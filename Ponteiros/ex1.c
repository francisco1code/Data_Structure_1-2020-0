#include<stdio.h>
#include<stdlib.h>

int main(){

	int array[20];

	printf("Array: %ld\n", sizeof(array));
	printf("Int: %ld\n", sizeof(int));
	printf("Short: %ld\n", sizeof(short));
	printf("Float: %ld\n", sizeof(float));
	printf("Long Int: %ld\n", sizeof(long int));
	printf("Long Long Int: %ld\n", sizeof(long long int));
	printf("Char: %ld\n", sizeof(char));

	return 0;
}