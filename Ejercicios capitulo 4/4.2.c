#include <stdio.h>


int cubo(void);
int i;

void main(void)
{
    int cub;


    for (i = 1; i <= 10; i++)
    {

        cub = cubo();
        printf("\n El cubo de %d es: %d", i, cub);
    }
}

int cubo(void)
{

    int i = 2;
return (i*i*i);


}
