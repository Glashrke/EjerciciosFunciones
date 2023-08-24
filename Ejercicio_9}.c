#include <stdio.h>

int notasalumno(float prom){
    if (prom >= 9 && prom <= 10) {
        return 4;
    } else if (prom >= 8 && prom < 9) {
        return 3;
    } else if (prom >= 7 && prom < 8) {
        return 2;
    } else if (prom >= 6 && prom < 7) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int cal,temp;
    int nota[15];
    printf("Cuantas notas vas a ingresar: ");
    scanf("%d",&temp);

    float notastot = 0, prom = 0;
    for (int i = 0; i < temp; i++) {
        float nota;
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%f", &nota);
        notastot += nota;
    }

    prom = notastot/temp;
    cal=notasalumno(prom);

    printf("El promedio de las notas es %.3f \n", prom);
    printf("La calif. es: %d\n", cal);



}