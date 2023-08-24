#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
void contra(char aux, char num[6]){

	printf("\n desea ver su contrasenia? s/n \n");
	scanf("%c",&aux);
	if(aux == 's'||aux=='S'){
	
		printf("%s",num);
	
	}else{
		printf("decidio no ver su contrasena \n");
	}
}




int main(){
	char num[7];
	char aux=0;
	printf("Ingresa la contrasenia numerica: \n");
	for(int i=0;i<6;i++){
		aux = getch();
		num[i]=aux;
		printf("*");
		num[6]='\0';
	}
	contra(aux, num);
	
}
