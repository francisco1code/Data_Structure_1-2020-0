#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n = 4;
    int *vet;
    vet = (int *)calloc(n, sizeof(int));

    if (vet == NULL)
    {
        exit(1);
    }

    printf("%ld\n", sizeof(vet));

    vet = (int *)realloc(vet, sizeof(vet) * 5);

    if (vet == NULL)
    {
        exit(1);
    }

    printf("%ld\n", sizeof(vet));

    free(vet);

    return 0;
}