# Aula 2 - Ponteiros

## Aritmética de ponteiros

            v[i] => *(v+1).

A linguagem C realiza esta operação desta forma :

                tipo * ptr;

                ptr + i = endereço contido em ptr + i * sizeof(tipo);