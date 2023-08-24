#include <stdio.h>

float Prom(int a, int b){
	float prom =0;
	prom = (a+b)/2;
	return prom;
}

int main() {
	int num1, num2;
	float prom=0;
	printf("Ingrese el primer numero: \n");
	scanf("%d",&num1);
	printf("Ingrese el segundo numero: \n");
	scanf("%d",&num2);
	
	prom = Prom(num1,num2);
	
	printf("El promedio es de: %.2f",prom);
}
