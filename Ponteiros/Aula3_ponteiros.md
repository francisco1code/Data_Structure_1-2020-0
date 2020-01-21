# Ponteiros Aula 3 

## Definições

* Ponteiro de Ponteiros WTF?😨😨😨
 
Assim como qualquer variavel um ponteiro possui seu endereço de memoria, e para guarda esse endereço declaramos um ponteiro de ponteiro que guarda o endereço de memoria de outro ponteiro.   
      
      int *ptr;
      int **ptr2 = &ptr;
 

## Matrizes

* Matrizes bidimensionais são implementadas como vetores de vetores. Uma matriz com m linhas e n colunas é um vetor de m elementos cada um dos quais é um vetor de n elementos.


* Alocação dinâmica de uma tal matriz:

      int **M; 
      M = malloc (m * sizeof (int *)); 
      for(int i = 0; i < m; ++i){
          M[i] = malloc (n * sizeof (int));
      }
      

 
          
