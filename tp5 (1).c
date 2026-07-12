#include<stdio.h>
#include<stdlib.h>

int main()
{
    int can;
    int num, m=0, a=0;
    int c = 0;
    float prom;
    int nota = 0;

    printf ("estudiantes:");
    scanf ("%d", &can);
    while (can <= 0) {
        printf ("ingrese una cantidad valida:");
        scanf ("%d", &can);
    }
    while (c < can) {
        do {
            printf ("calificaciones %d:", c + 1);
            scanf ("%d", &num);
            if (num>100) {
                printf ("calificaciones erronea\n");
            }
        } while ( num <1 || num>100);
        nota += num;
        c++;
    }

    prom = (float) nota / can;
    printf ("promedio:%.2f\n", prom);
    printf ("nota minima: %d\nnota maxima: %d", m, a);
}
//lo siento por estar imcompleta la actividad
//pero no le entiendo del todo la explicación
//del do-while, porque donde se supone
//ponga el aviso si no es con un if?
//y también veo el como puedo cargar el
//maximo y el minimo mientras uso el while
//esa parte ya es culpa mia por no encontrar
//la forma