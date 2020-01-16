# Ponteiros

## Conceitos básicos

### Alocação estática 

É Quando o **SO** aloca estáticamente um espaço constante na memória.

- Ex:

			int main(){
				
				int x; // Alcação estática;
				
				return 0;			
			}


### Alocação Dinâmica

É quando o **SO** aloca dinamicamente um espaço de memória, dando ao usuário a liberdade de alocação e desalocação da memória.


--------------------------------------------------------------------------------------------------

## Ponteiro

### Definição de ponteiros

Ponteiros são variáveis (geralmente um long int) que armazenam endereços de memória.

### Declaração de um ponteiro	

Um ponteiro é declarado pelo tipo da variável, e o nome.

- Ex:

			int main(){
				
				int x = 41;
				int * ptr = &x; // Declaração de um ponteiro;
				return 0;
			}

</strong>**Importante : Prestar atenção na declaração e inicialização**</strong>

Para acessar o conteúdo da variável do endereço guarado pelo ponteiro, utilizamos o operador dereferenciador '*'.

- Ex:

			int main(){
				
				int x = 41;
				int * ptr = &x;	
				printf("ptr = %ld\n", ptr); // Mostrará o conteúdo de ptr, ou seja o endereço de x;
			}

### Aplicações de ponteiros

### 1. Passagem por referência

Em C, parêmetros são passados para funções por valor. Para fazer passagem por referência, utilizamos ponteiros. Como por exemplo na função `scanf()`.

Para fazer isso utilizamos o operador '&'.	

- Ex: 
	
			int main(){
				
				int x;
				scanf("%d", &x);// Passagem por referência;
				return 0;
			}
			
## Outros exemplos de código :

- [Exemplo de declaração de ponteiro](./Ex1_ptr.c)
- [Passagem por referênncia](./Ex2_ptr.c)

## 2. Alocação dinâmica

Consiste em reservar espaço na memória em tempo de execução, de forma dinâmica.

- **PS: A memória permanece alocada, até que ela seja desalocada manualmente.**

### Porque utilizar?

- Evitar más praticas como esta :

            int n;
            scanf("%s", &n);
            int vetor[n];

- No exemplo acima o vetor alocara estaticamente um vetor com o tamanho maximo do tipo inteiro, ou seja disperdício de memória e uma má pratica, e a alocação dinâmica visa evitar essa más práticas.

### Funções de alocação dinâmica

- Todas essas funções estão presentes na biblioteca `<stdlib.h>`.

1. void *malloc(size_t tamanho);
2. void *calloc(size_t n,size_t tamanho);
3. void *realloc(void *ptr, size_t tamanho);

### 1. malloc()

A função malloc() retorna um ponteiro do tipo `void` que aponta para um espaço n*(tamanho do tipo de variável) na memória.

malloc() possui um argumento, um `size_t` que representa o tamanho em bytes da sua alocação.

- Ex1 :

			int main(){
				int *v, n;
				n = 4;
				v = (int*)malloc(n*sizeof(int));// Alocação dinâmica
				if (v == NULL){
					exit(1);
				}
				return 0;
			}

**Para desalocar um espaço de memória utilizamos o comando free(), que recebe o ponteiro como argumento.**

### 2. calloc()

A função calloc() retorna um ponteiro do tipo `void` que aponta para um espaço n*(tamanho do tipo de variável) na memória.

calloc() possui dois argumentos um `size_t` que representa o numero de membros, e um `size_t` que representa o tamanho em bytes da sua alocação.

A diiferença entre o calloc() e o malloc(), é que o malloc() aloca um espaço na memória, porém com lixo de memória, ja o calloc() aloca com todos os elementos nulos.

- Ex2 :

			int main(){
				int *v, n;
				n = 4;
				v = (int*)calloc(n, sizeof(int));// Alocação dinâmica
				if (v == NULL){
					exit(1);
				}
				return 0;
			}

### 3. realloc()

A função realloc() re-aloca um espaço na memória de tamanho n*sizeof(tipo de variavel), de maneira dinâmica, e retorna um ponteiro que aponta para essa região de memória.

realloc() recebe dois argumentos, um ponteiro, e um `size_t` que representa o tamanho da região de memória que será realocado.

- Ex3 :

			int main(){
				int *v, n;
				n = 4;
				m = 3;
				v = (int*)calloc(n, sizeof(int));// Alocação dinâmica
				
				if (v == NULL){
					exit(1);
				}

				v = (int*)realloc(v, m*sizeof(int)); // Realocação 
				
				return 0;
			}

## Outros exemplos de código :
 
 - [Exemplo de malloc(), calloc, e realloc()](./Ex3_ptr.c)