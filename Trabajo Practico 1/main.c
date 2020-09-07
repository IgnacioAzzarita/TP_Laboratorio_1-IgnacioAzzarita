#include <stdio.h>
#include <stdlib.h>


int main(){
 int opcion;
    do
    {
        printf("1. Sumar\ 2.Restar\ 3.Multiplicar\ 4.Dividir\ 5.Factorial\ 6.Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                printf("\nEstoy cargando...\n");
            break;
            case 2:
                printf("Estoy mostrando...\n");
            break;
            case 3:
                printf("\nEstoy eliminando...\n");
            break;
            case 4:
                printf("\nLALALALALA\n");
                break;
            case 5:
                printf("\nJIJIJI\n");
                break;
            case 6:
                printf("\nGracias por usar el programa...\n");
            break;

        }


    }while(opcion!=6);}


