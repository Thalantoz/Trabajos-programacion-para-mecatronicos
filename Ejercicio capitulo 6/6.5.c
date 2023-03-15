#include <stdio.h>

const int MAX = 50;
const int EXA = 4;

void Lectura(float [MAX][EXA], int);

void F1(float [MAX][EXA], int);

void F2(float [MAX][EXA], int);

void main(void)
{
    int NAL;
    float ALU[MAX][EXA];
    do
    {
            printf("Ingrese el numero de alumnos del grupo: ");
            scanf("%d", &NAL);
    }
    while (NAL>MAX || NAL<1);
    Lectura(ALU, NAL);
    F1(ALU, NAL);
    F2(ALU, NAL);
}

void Lectura(float A[][EXA], int N)

{
    int I, J;
    for (I=0; I<N; I++);
        for (J=0; J<EXA; J++);
        {
            printf("Ingrese la calificacion %d del alumno %d: ", J+1, I+1);
            scanf("%f", &A[I][J]);
        }
}

void F1(float A[][EXA], int T)

{
    int I, J;
    float SUM, PRO;
    for (I=0; I<T; I++)
    {
        SUM=0;
        for (J=0; J<EXA; J++)
                SUM += A[I][J];
            PRO = SUM / EXA;
            printf("\nEl promedio del alumno %d es: %5.2f", I+1, PRO);
    }
}

void F2(float A[][EXA], int T)

{
    int I, J, MAY;
    float SUM,PRO, MPRO = 0;
    printf("\n");
    for (J=0; J<EXA; J++)
    {
        SUM =0;
        for (I=0; I<T; I++)
            SUM += A[I][J];
        PRO = SUM / T;
        if (PRO > MPRO)
        {
            MPRO = PRO;
            MAY = J;
        }
            printf("\nEl promedio del examen %d es: %f", J+1, PRO);
    }
    printf("\n\nEl examen con mayor promedio es: %d \t Promedio: %5.2f", MAY+1, MPRO);

}