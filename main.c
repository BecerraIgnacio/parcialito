#include <stdio.h>

int main() {
    int nota=0, alumno=1, total=0;
    float promedio;
    printf("Promedio de notas curso.\n");
    printf("Ingrese nota alumno %d: ",alumno);
    scanf("%d",&nota);
    while(nota != -1){
        if(nota>=0&&nota<=10){
            alumno=alumno+1;
            total=total+nota;
            printf("Ingrese nota alumno %d: ",alumno);
            scanf("%d",&nota);
        }
        else{
            printf("Error del tipo de nota.\n");
            nota=0;
            alumno=alumno-1;
        }
    }
    if(nota==-1){
        alumno=alumno-1;
    }
    promedio=total/alumno;
    printf("El promedio de las notas es de: %.2f",promedio);
    return 0;
}
