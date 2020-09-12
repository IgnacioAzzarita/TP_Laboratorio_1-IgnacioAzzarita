#include "FuncionesAritmeticas.h"
 float ObtengoNumero(){
     float numero;
     printf("Ingrese el numero deseado");
     scanf("%f",&numero);
     return numero;}
 float Suma(float numero1,float numero2){
        float resultado;
        resultado=numero1+numero2;
        return resultado;}
    float Resta(float numero1, float numero2){
        float resultado;
        resultado=numero1-numero2;
        return resultado;}
    double Multiplicacion(float factor1,float factor2){
        double producto;
        producto=factor1*factor2;
        return producto;}
    float Division(float dividendo,float divisor){
        if(divisor==0){
        printf("No se puede dividir por 0. Elija otro valor:");}
        float cociente;
        cociente=dividendo/divisor;
        return cociente;}
long long int Factorial(long long int primerOperando){
    long long int resultado;
    int i;
    resultado= 1;
    for(i = 1; i <= primerOperando; i++){
        resultado *= i;}
    return resultado;
}


