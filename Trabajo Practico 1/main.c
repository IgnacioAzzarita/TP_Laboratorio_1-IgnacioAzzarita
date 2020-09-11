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
#include <ctype.h>
#include <conio.h>
#include "FuncionesAritmeticas.h"



int main(){
 char continuar;
 int opcion;
 int primerOperando;
 int segundoOperando;
 int opcion1;
 int opcion2;
 int opcion3;
 int suma;
 int resta;
 int producto;
 float cociente;
float factor;
 opcion1=0;
 opcion2=0;
 opcion3=0;

 continuar='s';


          printf("------------Menu de opciones------------");
    printf("\n1. Ingresar 1er operando:\n");
    printf("2. Ingresar 2do operando:\n");
    printf("3. Calcular todas las operaciones: \n");
    printf("   a) Calcular la suma (primerOperando+segundoOperando)\n");
    printf("   b) Calcular la resta (primerOperando-segundoOperando)\n");
    printf("   c) Calcular la division (primerOperando/segundoOperando)\n");
    printf("   d) Calcular la multiplicacion (primerOperando*segundoOperando)\n");
    printf("   e) Calcular el factorial (primerOperando!)\n");
    printf("4. Informar resultados\n");
    printf("5. Salir\n\n");

do
    {
         system("pause");
         printf("Ingrese la opcion deseada");
         scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                primerOperando=ObtengoNumero();
                opcion1=1;
                break;
            case 2:
                if(opcion1==1){
                segundoOperando=ObtengoNumero();
                opcion2=1;
                scanf("%d",&segundoOperando);}
                else {
                        printf("\nDeberias haber ingresado el primer operando\n");}
                        break;
            case 3:
                if(opcion1==1 && opcion2==1){
                opcion3=1;
                printf("\nHaciendo las operaciones!\n");
                suma=Suma(primerOperando,segundoOperando);
                resta=Resta(primerOperando,segundoOperando);
                producto=Multiplicacion(primerOperando,segundoOperando);
                cociente=Division(primerOperando,segundoOperando);
                factor=Factorial(primerOperando);}
                else{
                    printf("\nImposible hacer los calculos ya que falta ingresar operandos!\n");}
                    break;
                    system("pause");
            case 4:
                if(opcion3==1){
                printf("Eligio opcion 4. Los resultados son los siguientes:\n");
                printf("   a) Resultado de la suma de los operandos es: %d\n", suma);
                printf("   b) Resultado de la resta de los operandos es: %d\n", resta);
                printf("   c) El cociente de la division es: %f\n", cociente);
                printf("   d) El producto de la multiplicacion es: %d\n", producto);
                printf("   e) El factorial del primer operando es: %f\n", factor);}
                else{
                    printf("No ha seleccionado la opcion para hacer los calculos");}
                break;
                system("pause");
            case 5:
                printf("\nGracias por usar el programa! Hasta luego!\n");
                continuar='t';
                break;
            default:
                printf("\nElija una opcion valida\n");}
              system("pause");

    }while(continuar=='s');
    return 0;
    }






