#include <stdio.h>
int main()
{
    int shops, i, recorrido, menor, element,tCases,mayor, t = 0;
    scanf("%d", &tCases);
    while (t < tCases)
    {
        scanf("%d",&shops);
        int longSrt [shops];
        for (i= 0; i < shops; i++)
        {
            scanf("%d", &element);
            longSrt[i] = element;
        }
        menor = longSrt[0];
        mayor = longSrt[0];
        for (i= 0; i < shops; i++)
        {
            if (longSrt[i] < menor)
            {
                menor = longSrt[i];
            }
            else if(longSrt[i] > mayor)
            {
                mayor = longSrt[i];
            }
        }
        recorrido = 2*(mayor - menor);
        printf("%d\n", recorrido);
        t++;
    }
    
    
}
