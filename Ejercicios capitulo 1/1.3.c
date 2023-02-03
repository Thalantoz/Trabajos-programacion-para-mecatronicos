#include <stdio.h>

void main (void)

{
    int cla;
    float su1, su2, su3, su4, su5, su6, ing, pro;

    printf("Ingrese la clave del empleo y los 6 sueldos: \n");

    scanf("%d %f %f %f %f %f %f", &cla, &su1, &su2,&su3,&su4,&su5,&su6);
    ing = (su1 + su2 + su3 +su4 + su5 + su6);

    pro = ing / 6;

    printf("\n %d %5.2f %5.2f", cla, ing, pro);

    return 0;

}
