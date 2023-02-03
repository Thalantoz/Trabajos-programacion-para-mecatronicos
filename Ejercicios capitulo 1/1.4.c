#include <stdio.h>

void main(void)
{

float bas, alt, sup;

printf("Ingrese la base y la altura del triangulo:");

scanf("%f %f", &bas, &alt);

sup = bas * alt / 2;

printf("\n la superficie del triangulo es: %5.2f", sup);

return 0;





}
