#include<stdio.h>
#include<conio.h>

int main ()
{
    char *cad0;

    cad0 = "Colombia";
    puts(cad0);

    cad0 = "Brasil";
    puts(cad0);

    char *cad1;
    gets(*cad1);

    char cad2[20] = "Mexico";
    puts(cad2);
    gets(cad2);

    cad2[10] = "Guatemala";
    puts(cad2);

    getch ();
    return 0;
}
