# Aula 2 - Ponteiros

## Aritmética de ponteiros

            v[i] => *(v+1).

A linguagem C realiza esta operação desta forma :

                tipo * ptr;

                ptr + i = endereço contido em ptr + i * sizeof(tipo);

- Ex :
            [5 2 3 1 4]
        
        v+2 = endereço de memória de 3;
        *(v+2) = 3;
        *v+2 = 7;