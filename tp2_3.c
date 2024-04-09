#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7

int main()
{
    
    int i,j;
    
    int **punt;

    punt = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++)
    {
        punt[i] = (int *)malloc(M * sizeof(int));
    }
    


    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            punt[i][j]=1+rand()%100;
            if (punt[i][j] < 10)
            {
                printf("0%d ", punt[i][j]);
            } else
            {
                printf("%d ", punt[i][j]);
            }
                        
            
        }
    printf("\n");
    }

    return 0;
}


