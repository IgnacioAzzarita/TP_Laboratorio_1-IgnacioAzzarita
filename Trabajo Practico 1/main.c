#include <stdio.h>
#include <stdlib.h>
#include "FuncionesAritmeticas.h"


int main(){
 int opcion;
 int primerNumero;
 int segundoNumero;
 int resultadoSuma;
 int resultadoResta;
 int producto;
 float cociente;



do
    {
        printf("1. Sumar\ 2.Restar\ 3.Multiplicar\ 4.Dividir\ 5.Factorial\ 6.Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        if(opcion!=6){
        primerNumero= printf("Ingrese el primer numero:");
        scanf("%d",&primerNumero);
        segundoNumero=printf("Ingrese segundo numero:");
        scanf("%d",&segundoNumero);}
        switch(opcion)
        {
            case 1:
                resultadoSuma=Suma(primerNumero,segundoNumero);
                printf("\nEl resultado de la suma es: %d\n",resultadoSuma);
            break;
            case 2:
                resultadoResta=Resta(primerNumero,segundoNumero);
                printf("El resultado de la resta es: %d\n",resultadoResta);
            break;
            case 3:
                producto=Multiplicacion(primerNumero,segundoNumero);
                printf("\nEl producto de la multiplicacion es: %d\n",producto);
            break;
            case 4:
                cociente=Division(primerNumero,segundoNumero);
                printf("\nEl cociente de la division es: %f\n",cociente);
                break;
            case 5:
                printf("\nEl resultado del factorial es: \n");
                break;
            case 6:
                printf("\nGracias por elegir mi calculadora :) \n");
            break;
            return 0;
        }


    }while(opcion!=6);}




