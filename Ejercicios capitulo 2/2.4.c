#include <stdio.h>

void main(void){


float pre, npr;

printf("Ingrese el precio del producto: ");

scanf("%f", &pre);

if (pre < 1500)



npr = pre * 1.11;

else
    npr = pre *1.00;

    printf("\n nuevo precio del producto: %8.2f", npr);

    return 0;


}
