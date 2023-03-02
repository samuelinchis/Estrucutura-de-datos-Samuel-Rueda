#include <stdio.h>
int main()
{
    int nElements, i, j, k, diferencia;
    scanf("%d", &nElements);
    int secuencia[nElements];
    int resta[nElements - 1];
    int comp[nElements - 1];
    int acum = nElements-1;
    for(i = 0; i<nElements; i++)
    {
        scanf("%d", &secuencia[i]);
    }
    for(j = 0; j < nElements-1; j++)
    {
        diferencia = secuencia[j] - secuencia[j+1];
        if(diferencia > 0)
        {
            resta[j] = diferencia;
        }
        else
        {
            diferencia = diferencia * -1;
            resta[j] = diferencia;
        }
        comp[j] = acum;
        acum --;
    }
    for(k = 0; k < nElements-1; k++)
    {
        if(comp[k] != resta[k])
    {
        printf("not Jolly");
        k = nElements;
    }
    }
    if(k == nElements - 1)
    {
        printf("Jolly");
    }
    
}