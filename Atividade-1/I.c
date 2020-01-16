#include<stdio.h>

int main(int argc, char const *argv[])
{
	int N, M, t=1, p, a, b, x1=1, y1=1, x2=0, y2=0, yn1=0, xn1=0, yn2=0, xn2=0, xe=0, ye=0, saiu1=0, saiu2=0, en=0, flag1=1, flag2=1;
	scanf("%d %d", &N, &M);
	y2 = M;
	x2 = N;
	scanf("%d", &p);

	while(p){
		scanf("%d %d", &a, &b);


		if (a==1){
			y1++;
		}
		else if (a==2){
			y1--;
		}
		else if (a==3){
			x1++;
		}
		else{
			x1--;
		}

		if ((y1 < 1 || y1 > M || x1 < 1 || x1 > N) && (flag1)){
			saiu1 = t;
			xn1 = x1;
			yn1 = y1;
			flag1=0;
		}

		if (b==1){
			y2++;
		}
		else if (b==2){
			y2--;
		}
		else if (b==3){
			x2++;
		}
		else{
			x2--;
		}

		if ((y2 < 1 || y2 > M || x2 < 1 || x2 > N) & (flag1)){
			saiu2 = t;
			xn2 = x2;
			yn2 = y2;
			flag1=0;
			//break;
		}


		if (y1==y2 && x1==x2){
			en = t;
			ye = y1;
			xe = x1;
		}

		
		p--;
		t++;
	}

	if (saiu1){
		printf("PA saiu na posicao (%d,%d) no passo %d\n", xn1, yn1, saiu1);
	}
	else {
		if (saiu2){
			printf("PB saiu na posicao (%d,%d) no passo %d\n", xn2, yn2, saiu2);
		}
		else if (en){
			printf("Encontraram-se na posicao (%d,%d) no passo %d\n", xe, ye, en);
		}
		else{
			printf("Nao se encontraram\n");
		}
	}

	return 0;
}