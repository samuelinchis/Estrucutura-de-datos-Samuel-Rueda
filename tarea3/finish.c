#include <stdio.h>
int main ()
{   
    int tank = 0; 
    int t, i,n, w = 1 ;
    scanf("%d",&n);
    while (w <= n)
    {
        scanf("%d", &t);
        int pi [t];
        int qi[t];
        for(i = 0;i < t*2; i++)
        {
            if (i < t)
            {
            scanf("%d", &pi[i]);
            }
            else
            {
            scanf("%d", &qi[i-t]);
            }
        }
        for(i = 0;i < t; i++)
        {
            tank += pi[i];
            tank -=qi[i];
        }
        if (tank < 0)
        {
            printf("case %d: Not possible\n", w);
        }
        else
        {   
            printf("case %d: possible\n", w);
        }
        w++;
    }
}
