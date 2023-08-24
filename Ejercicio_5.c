#include <stdio.h>

void Prom(int a, int b,int c){
	float prom =0;
	prom = (a+b+c)/3;
    printf("El promedio es de: %.2f",prom);
	
}

int main() {
	int num1, num2, num3;
	float prom=0;
	printf("Ingrese el primer numero: \n");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&num2);
	printf("Ingrese el tercer numero: \n");
	scanf("%d",&num3);
	Prom(num1,num2,num3);
	
	
}
