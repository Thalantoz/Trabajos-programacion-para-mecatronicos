#include <stdio.h>
#include <stdlib.h>

void bimonachi(int num);

int main() {
    int num;

    printf("Ingrese el número deseado: ");
    scanf("%d", &num);

    printf("\nSucesión de Finonacci de %d elementos:\n", num);
    bimonachi(num);

    return 0;
}

void bimonachi(int num2) {
    int a, a1 = 1, bb = 2, tiempo;

    printf("%d %d ", a1, bb);

    for (a = 3; a <= num2; a++) {
        tiempo = bb;
        bb = bb + a1;
        a1 = tiempo;
        printf("%d ", bb);
    }
    printf("\n");
}
