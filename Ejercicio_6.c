#include <stdio.h>

void negroblanco (int num){
    if(num>=1){
        printf("0");
    }else{
        printf("1");
        num*=-1;
        printf("\n%d",num);
    }
}

int main(){
    int num;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    negroblanco(num);
}