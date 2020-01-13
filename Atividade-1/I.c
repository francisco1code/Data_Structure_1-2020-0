#include<stdio.h>

int main(int argc, char const *argv[])
{
	int coluna,linha,x1=1,y1=1,x2,y2,x1_=0,y1_=0,x2_=0,y2_=0,cont=1,p=0,a=0,b=0,flag1=0,flag2=0, contador1=0, contador2=0;
	int posicao=0;

	scanf("%d %d", &coluna, &linha);

	x2 = coluna;
	y2 = linha;

	scanf("%d", &p);

	while(p){
		scanf("%d %d", &a, &b);
		if(a==1){
			y1++;
		}
		else if(a==2){
			y1--;
		}
		else if(a==3){
			x1++;
		}
		else{
			x1--;
		}

		if(b==1){
			y2++;
		}
		else if(b==2){
			y2--;
		}
		else if(b==3){
			x2++;
		}
		else{
			x2--;
		}

		if((x1>linha || x1<1 || y1>coluna || y1<1) && contador1==0){
			x1_ = x1;
			y1_ = y1;
			flag1 = 1;
			contador1++;
			posicao = cont;
		}
		if((x2>linha || x2<1 || y2>coluna || y2<1) && contador2==0){
			x2_ = x2;
			y2_ = y2;
			flag2 = 1;
			contador2++;
			posicao = cont;
		}

		p--;
		cont++;
	}

	if(x1==x2 && y1==y2){
		printf("Encontraram-se na posicao (%d,%d) no passo %d\n", x1,y1,cont);
	}
	else{
		if(flag1 && flag2){
			printf("PA saiu na posicao (%d,%d) no passo %d\n", x1_,y1_,posicao);
		}
		else if(flag1){
			printf("PA saiu na posicao (%d,%d) no passo %d\n", x1_,y1_,posicao);
		}
		else if(flag2){
			printf("PB saiu na posicao (%d,%d) no passo %d\n", x2_,y2_,posicao);
		}
		else{
			printf("Nao se encontraram\n");
		}
	}
	return 0;
}