#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n1, n2, n3, n4;

	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if(n1>=n2 && n1>=n3 && n1>=n4){
		printf("%d\n", n1);
	}
	else if(n2>=n3 && n2>=n4){
		printf("%d\n", n2);	
	}
	else if(n3>=n4){
		printf("%d\n", n3);
	}
	else{
		printf("%d\n", n4);
	}

	return 0;
}