#include<stdio.h>
#include<stdlib.h>

int main()
{
    int nota;
    printf("ingrese su nota:");
    scanf("%d", &nota);
    if (nota < 60){
    printf("calificacion:F");
    }
    else if (nota >= 60 && nota < 70){
    printf("calificacion:D");
    }
    else if (nota >= 70 && nota<80) {
    printf("calificacion:C");
    }
    else if (nota >= 80 && nota < 90) {
    printf("calificacion:B");
    }
    else {
    printf("calificacion:A");
    }
    return 0;
}