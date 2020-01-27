
# Listas
Lista encadeada é uma sequencia de objetos em sequência, todos do mesto tipo que são armazenadas na memória RAM (Randon Access Memory). 
 Diferente de um array comum que é feita com locação statica, na lista são estruturas dinamicas.

# Classificação 
* Lista LIFO (Last in, Firt out), mais conhecida como pilha.
* Lista FIFO (firt in,  Firt out), mais conhecida como fila.
* Lista em qualquer posição, Listas Encadeada  

# Lista encadeada

## Estruturas  de uma Lista Encadeada

A princio é criado uma variavel para armazana um valor, subsequente esse "Casa1" da variavel possuira uma par "Casa2" que é um ponteiro para proxima casa.

Usaremos o Exemplo de um estrutura de inteiro.

      struct  reg {
          int  conteudo;
          struct  reg *prox;
      }

É conviniente tratamos cada nova celula como um tipo, e atribuimos um nome a esse tipo;

Exmplo de declaração.

        typedef struct reg celula;
        celula c1;
        celula *p1;

Se  'c1' é uma celula logo.
                
      c1.conteudo; // conteudo da celula.
      c1.prox; // é endereço da prox celula.
                
se '*p1' é o enderenço de uma celula logo.

        p->conteudo; // é o conteudo da celula.
        p->prox; // é o endereço da prox celula.

Atenção(Se p é o ultimo endereço da celula, logo 'p->prox' vale NULL ) 



