#include <stdio.h>

void main (void){

float sal;

int niv;

printf("Ingrese el nivel academico del profesor:");

scanf("%d", &niv);

printf("Ingrese el salario: ");

scanf("%f", &sal);

switch (niv)
printf("Ingrese el salario: ");

scanf("%f" , &sal);

switch(niv)
{

    case 1: sal = sal *1.0035; break;
    case 2: sal = sal *1.0041; break;
    case 3: sal = sal *1.0048; break;
    case 4: sal = sal *1.0053; break;



}

printf("\n\n Nivel: %d \t Nuevo Salario: %8.2f", niv, sal);

return 0;

}
