#include<stdio.h>

struct tipoData{
	int dia;
	int mes;
	int ano;
};

struct tipoPessoa{
	char nome[80];
	struct tipoData data;
};

struct tipoPessoa separaInfo(char name[80], int data_nascimento){
	
	struct tipoPessoa p1;
	int d=0, m=0, y=0;
	y = data_nascimento/10000;
	m = (data_nascimento/100)%(y);
	d = (data_nascimento)%(data_nascimento/100);

	p1.data.dia = d;
	p1.data.mes = m;
	p1.data.ano = y;

	for(int i=0;;i++){
		if (name[i]!= '\0'){
			p1.nome[i] = name[i];
		} 
		else {
			p1.nome[i] = '\0';
			break;
		}
	}

	return p1;
}