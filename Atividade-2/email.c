#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int main(){
	char * email = "@unb.br";
	char ans[MAX], text[MAX], nome[MAX], sobre[MAX];
	int i = 0, space=0, k=0, j=0;

	scanf("%[^\n]", &text);

	while(text[i]!='\0'){
		if (text[i] == ' '){
			space = i;
		}
		i++;
	}

	i = 0;

	while(text[i]!=' '){
		
		nome[i] = tolower(text[i]);
		i++;
	}

	nome[i] = '\0';

	while(text[space+1]!='\0'){
		sobre[k] = tolower(text[space+1]);
		space++;
		k++;
	}

	sobre[k] = '\0';

	i=0;
	k=0;
	j=0;


	while(nome[i]!='\0'){
		ans[i] = nome[i];
		i++;
	}

	ans[i++] = '.';

	while(sobre[j]!='\0'){
		ans[i] = sobre[j];
		i++;
		j++;
	}

	while(*(email+k)!='\0'){
		ans[i] = *email++;
		i++;
		k++;
	}

	ans[i] = '\0';

	printf("%s\n", ans);
	
	return 0;
}