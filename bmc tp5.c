#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int opcion;
    float peso;
    float altura;
    float re = 0;
    printf("quieres usar libras(1) o kilogramos(2)\n");
    printf("opciones que elegiste (1/2):");
    scanf("%d", &opcion);
    switch (opcion){
    case 1:
        printf("peso(libras):");
        scanf("%f", &peso);
        printf("altura(pulgadas):");
        scanf("%f", &altura);
        while (peso>0 && altura>0) {
        re=(peso*703)/(altura*altura);
        printf("tu indice es de:%f \n",re);
        break;
        }
        break;
    case 2:
        printf("peso(kilos):");
        scanf("%f", &peso);
        printf("altura(metro):");
        scanf("%f", &altura);
        while (peso>0 && altura>0) {
        re= peso/(altura*altura);
        printf("tu indice es de: %f \n",re);
        break;
        }
        break;
    default:
        printf ("opcion invalida\n");    
        break;
    }
    while (re >0) {
    printf("  indice   /condición\n");
    printf("   <18     /bajo peso\n");
    printf("18.5 a 24.9/normal\n");
    printf(" 25 a 29.9 /sobrepeso\n");
    printf("  >=30     /obesidad\n \n");

     if (re < 18) {
        printf ("ustedes tiene: bajo peso\n");
        
     } else if (re >= 18.5 && re <= 24.9) {
        printf ("ustedes tiene: peso normal\n");
        
     } else if (re >= 25 && re <= 29.9) {
        printf ("ustedes tiene: sobrepeso\n");
        
     } else if (re >= 30) {
        printf ("ustedes tiene: obesidad\n");
        
     } 
     return 0;
    }
     printf ("ingrese valores validos");
     
    return 0;
    //https://github.com/emiliopereira-pnj/Trabajo-de-clases.git
}