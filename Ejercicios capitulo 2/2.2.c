#include <stdio.h>


void main (void){

float pre, npr;

printf("Ingrese el precio del producto:");

scanf("%f", &pre);

if (pre > 1500){

    npr = pre * 1.11;

    printf("\n Nuevo precio: %7.2", npr);



}


return 0;
}
