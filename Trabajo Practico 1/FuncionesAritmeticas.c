#include "FuncionesAritmeticas.h"
 int Suma(int numero1,int numero2){
        int resultado;
        resultado=numero1+numero2;
        return resultado;}
    int Resta(int numero1, int numero2){
        int resultado;
        resultado=numero1-numero2;
        return resultado;}
    int Multiplicacion(int factor1,int factor2){
        int producto;
        producto=factor1*factor2;
        return producto;}
    float Division(float dividendo,float divisor){
        if(divisor==0){
        printf("No se puede dividir por 0. Elija otro valor:");
        scanf("%f",&divisor);}
        float cociente;
        cociente=dividendo/divisor;
        return cociente;}
