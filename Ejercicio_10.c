#include <stdio.h>

int Prod(int a, int b) {
    int produc = 0;

    for (int i = 0; i < b; i++) {
        produc += a;
    }

    return produc;
}

float Divi(int dividendo, int divisor) {
    int cociente = 0;

    while (dividendo >= divisor) {
        dividendo -= divisor;
        cociente++;
    }

    return cociente;
}

int main() {
    int a, b;
    printf("Por favor ingrese un número entero +: ");
    scanf("%d", &a);
    printf("Ahora ingrese otro número entero +: ");
    scanf("%d", &b);
    
    int produc = Prod(a, b);
    printf("El producto de la multi. de %d y %d es: %d\n", a, b, produc);

    if (b != 0) {
        float div = Divi(a, b);
        printf("La división entera de %d entre %d es: %.2f\n", a, b, div);
    } else {
        printf("No se puede realizar una division x 0. \n");
    }

    return 0;
}
