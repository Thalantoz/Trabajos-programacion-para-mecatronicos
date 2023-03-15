#include <stdio.h>
#include <ctype.h>
#include<conio.h>



int main ()
{
  char cad[50];
  int i = 0, mi = 0, ma = 0;

  printf("\nIngrese la cadena de caracteres (maximo 50 caracteres): ");
  gets(cad);

  while(cad[i] != '\0')
   {
     if (islower (cad[i]))
     {
         mi++;
     }
     else
     {
          if (isupper (cad[i]))
          {
               ma++;
          }
     }
     i++;
   }

printf("\n\nNúmero de letras minusculas: %d", mi);
printf("\nNúmero de letras mayusculas: %d", ma);

getch ();
return 0;
}
