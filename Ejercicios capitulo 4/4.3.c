#include <stdio.h>


void f1(void);
int k = 5;

void main(void)
{
    int i;

    for (i = 1; i <= 3; i++)
        f1();
}

void f1(void)

{

    int k = 2;

    k += k;

    printf("\n\nEl valor de la variable local es: %d", k);

    K = K + k;

    printf("\nEl valor de la variable global es: %d", K);
}
