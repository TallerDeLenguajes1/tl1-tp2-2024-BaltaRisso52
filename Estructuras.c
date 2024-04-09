#include <stdio.h>
#include <stdlib.h>

struct compu
{
    int velocidad; // entre 1 y 3 GHz
    int anio; // entre 2015 y 2023
    int cantidad; // entre 1 y 8
    char *tipo_cpu; //  valores del arreglo tipos
}typedef comp;

void cargarDatos();


int main()
{
    
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    comp *puntero;
    puntero = (comp *)malloc(5 * sizeof(comp));

    // cargarDatos();
    




    return 0;
}

void cargarDatos(){
    for (int i = 0; i < 5; i++)
    {
        printf("Compu numero %d:", i+1);
        printf("\nVelocidad (entre 1 y 3): ");
        
    }
    
}
