#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void alumno(){
	char fullname[30];
	gets(fullname);
	printf("El nombre y apellido del alumno es: \n");
	puts(fullname);
}

int main(){
	char fullname[30];
	printf("Ingrese el nombre y apellido del alumno: \n");
	alumno();
	return 0;
}
