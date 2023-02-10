#include <stdio.h>

int cubo(int);

void main(void)
{
    int i;
    for (i = 1; i <= 10; i++)
    printf("\n El cubo de i es:%d", cubo(i));

}

int cubo(int K)
{
    return (K*K*K);
}
