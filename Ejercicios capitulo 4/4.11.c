#include <stdio.h>


int main(int);

void main (void)
{
    int num, res;
    printf("\nIngresa el numero: ");
    scanf("%d", &num);
    RES = mad(num);
    printf("\nEl mayor divisor de %d es: %d", num, res);
}


int mad(int n1)

{
    int i = (n1 / 2);

    while (n1 % i)

        i--;
        return i;
}
