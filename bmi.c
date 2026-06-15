#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int opcion;
    float peso;
    float altura;
    float re;
    printf("quieres usar libras(1) o kilogramos(2)\n");
    printf("opciones que elegiste (1/2):");
    scanf("%d", &opcion);
    if (opcion==1){
    printf("peso(libras):");
    scanf("%f", &peso);
    printf("altura(pulgadas):");
    scanf("%f", &altura);
    re=(peso*703)/(altura*altura);
    printf("tu indice es de:%f \n",re);
    } else {
    printf("peso(kilos):");
    scanf("%f", &peso);
    printf("altura(metro):");
    scanf("%f", &altura);
    re= peso/(altura*altura);
    printf("tu indice es de: %f \n",re);
    }
    printf("  indice   /condición\n");
    printf("   <18     /bajo peso\n");
    printf("18.5 a 24.9/normal\n");
    printf(" 25 a 29.9 /sobrepeso\n");
    printf("  >=30     /obesidad\n");
    return 0;
}