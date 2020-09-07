#include <stdio.h>
#include <stdlib.h>

int Suma(int numero1,int numero2);

int main(){
 int opcion;
 int primerNumero;
 int segundoNumero;
 int resultadoSuma;
 int resultadoResta;

 primerNumero= printf("Ingrese el primer numero:");
        scanf("%d",&primerNumero);
 segundoNumero=   printf("Ingrese segundo numero:");
        scanf("%d",&segundoNumero);
do
    {

        printf("1. Sumar\ 2.Restar\ 3.Multiplicar\ 4.Dividir\ 5.Factorial\ 6.Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
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
                printf("\nEl resultado de la multiplicacion es: \n");
            break;
            case 4:
                printf("\nEl cociente es: \n");
                break;
            case 5:
                printf("\nEl resultado del factorial es: \n");
                break;
            case 6:
                printf("\nGracias por elegir mi calculadora :) \n");
            break;

        }


    }while(opcion!=6);}

    int Suma(int numero1,int numero2){
        int resultado;
        resultado=numero1+numero2;
        return resultado;}
    int Resta(int numero1, int numero2){
        int resultado;
        resultado=numero1-numero2;
        return resultado;}



