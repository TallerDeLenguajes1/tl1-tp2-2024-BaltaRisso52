#include <stdio.h>
#include <stdlib.h>

#define CANT 5

struct compu
{
    int velocidad; // entre 1 y 3 GHz
    int anio; // entre 2015 y 2023
    int cantidad; // entre 1 y 8
    char *tipo_cpu; //  valores del arreglo tipos
}typedef comp;

void mostrarDatos(comp *punter, int i);
void pcVieja(comp *punt);
void masVelocidad(comp *punt);


int main()
{
    
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    comp *puntero;
    puntero = (comp *)malloc(CANT * sizeof(comp));

    
    for (int i = 0; i < CANT; i++)
    {
        printf("Compu numero %d:", i+1);
        printf("\nVelocidad(entre 1 y 3): ");
        scanf("%d", &puntero[i].velocidad);
        printf("\nAnio (entre 2015 y 2023): ");
        scanf("%d", &puntero[i].anio);
        printf("\nCantidad de nucleos (entre 1 y 8): ");
        scanf("%d", &puntero[i].cantidad);
        printf("\nTipo de procesador (entre 1 y 6): ");
        int aux;
        scanf("%d", &aux);
        puntero[i].tipo_cpu = tipos[aux-1];
    }

    for (int i = 0; i < CANT; i++)
    {
        
        mostrarDatos(puntero, i);

    }

    pcVieja(puntero);

    masVelocidad(puntero);


    return 0;
}


void mostrarDatos(comp *punter, int i){

    printf("\nCompu numero %d:", i+1);
    printf("\nVelocidad: %d", punter[i].velocidad);
    printf("\nAnio: %d", punter[i].anio);
    printf("\ncantidad de nucleos: %d", punter[i].cantidad);
    printf("\ntipo de procesador: %s", punter[i].tipo_cpu);
}

void pcVieja(comp *punt){
    int aux = 2024;
    int num;
    for (int i = 0; i < CANT; i++)
    {
        if (punt[i].anio < aux)
        {
            aux = punt[i].anio;
            num = i+1;
        }
        
    }

    printf("\nLa compu mas vieja es la numero: %d", num);
    printf("\nAnio: %d", aux);
    
}

void masVelocidad(comp *punt){

    int aux = 0;
    int num;
    for (int i = 0; i < CANT; i++)
    {
         if (punt[i].velocidad > aux)
         {
            aux = punt[i].velocidad;
            num = i+1;
         }
         
    }
    printf("\nLa compu con mayor velocidad es la numero: %d", num);
    printf("\nVelocidad: %d", aux);

}