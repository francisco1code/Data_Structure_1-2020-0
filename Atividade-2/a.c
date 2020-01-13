#include<stdio.h>

int main(int argc, char const *argv[])
{
	int max, a,ans=1;

	scanf("%d %d", &max, &a);

	if(a>max){
		ans =  (a/max)+1;
		printf("%d\n", ans);
	}
	else{
		printf("%d\n", ans);
	}
	return 0;
}