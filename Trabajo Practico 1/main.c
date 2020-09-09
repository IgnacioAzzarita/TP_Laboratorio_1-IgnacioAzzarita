/*Azzarita Ignacio Gabriel. Trabajo Practico 1 - Calculadora. DNI 38069412
1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones*/
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





