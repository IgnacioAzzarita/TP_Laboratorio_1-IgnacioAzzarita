#include "FuncionesAritmeticas.h"
 int ObtengoNumero(){
     int numero;
     printf("Ingrese el numero deseado");
     scanf("%d",&numero);
     return numero;}
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
float Factorial(float primerOperando){
    float resultado;
    float i;
    resultado= 1;
    for(i = 1; i <= primerOperando; i++){
        resultado *= i;}
    return resultado;
}
