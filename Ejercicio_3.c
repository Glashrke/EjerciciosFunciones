#include <stdio.h>
#include <string.h>
void ascii(){
    int num;
    printf("Ingrese un numero entero para verlo representado en la ASCII: \n");
    scanf("%d",&num);
    printf("El valor de su numero en ASCII es: %c",num);
}

int main(){
    ascii(num);
}