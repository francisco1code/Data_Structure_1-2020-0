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

		'''int main(){
			int x = 41;
			int * ptr = &x; // Declaração de um ponteiro;
			return 0;
		}'''

</strong>**Importante : Prestar atenção na declaração e inicialização**</strong>

Para acessar o conteúdo da variável do endereço guarado pelo ponteiro, utilizamos o operador dereferenciador '*'.

- Ex:
		'''int main(){
			int x = 41;
			int * ptr = &x;	
			printf("ptr = %ld\n", ptr); // Mostrará o conteúdo de ptr, ou seja o endereço de x;
		}'''
		
### Aplicações de ponteiros

### 1. Passagem por referência

Em C, parêmetros são passados para funções por valor. Para fazer passagem por referência, utilizamps ponteiros. Como por exemplo na função `scanf()`.

- Ex: 
		'''int main(){
			int x;
			scanf("%d", &x);// Passagem por referência;
			return 0;
		}'''
## Outros exemplos de código :

- ![Exemplo de declaração de ponteiro](./Ex1_ptr.c)
- ![Passagem por referênncia](./Ex2_ptr.c)
	
