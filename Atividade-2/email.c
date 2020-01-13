#include<stdio.h>
#include<string.h>

int main(){
	char text[100], nome[100], sobrenome[100];
	const char *email = "@unb.br";
	int cont=0, j=0;
	scanf("%[^\n]", &text);
	printf("%s\n", text);
	//fgets(text, 100, stdin);
	//text[strlen(text)-1] = '\0';

	for(int i = 0;i<strlen(text);i++){
		if(text[i]==' '){
			cont = i;
		}
		else{
			nome[i] = text[i];
		}
	}
	
	nome[cont] = '\0';

	for(int i=cont;i<(strlen(text)-1);i++){
		sobrenome[j] = text[i+1];
		j++;
	}
	nome[strlen(nome)] = '\0';
	sobrenome[strlen(sobrenome)] = '\0';
	nome[0] = tolower(nome[0]);
	sobrenome[0] = tolower(sobrenome[0]);
	strcat(nome, ".");
	strcat(nome,sobrenome);
	strcat(nome,email);
	printf("%s\n", nome);
	
	return 0;
}