#include<stdio.h>
#include<conio.h>
#include<ctype.h>


int main ()
{
    char p, cad[50];
    int n;

    printf("\nIngrese la cadena de caracteres (Maximo 50): ");
    gets(cad);

    printf("\nIngrese la posicion en la cadena que deseea verificar: ");
    scanf("%d",&n);

    if ((n>=0) && (n < 50))
    {
        p = cad[n-1];

        if (islower(p))
        {
            printf("\n%c es una letra minuscula.",p);
        }
        else
        {
            printf("\n%c no es una letra minuscula.",p);
        }
    }
    else
    {
        printf("\nEl valor ingresado de n es incorrecto.");
    }

    getch ();
    return 0;
}
