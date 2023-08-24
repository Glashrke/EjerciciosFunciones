#include <stdio.h>

float diaora (int dias){
    int hs;
    hs = dias * 24;
    return hs;
}

float oradia (int hs){
    float dias;
    dias = hs / 24;
    return dias;
}

int main(){
 int dias=0,aux,aux2;
 float hs=0;
 printf("Que quieres  convertir? 1. dias - horas  2. horas - dias");
 scanf("%d",&aux);
 printf("Ingrese el numero a convertir: \n");
 scanf("%d",&aux2);
 if(aux==1){
    dias=diaora(aux2);
    printf("Dias convertidos a horas es: %d",dias);
 } else if(aux==2){
    hs=oradia(aux2);
     printf("horas convertidas a dias es: %.2f",hs);
 }else{
    printf("El numero ingresado no es el q te pedi \n");
 }
}