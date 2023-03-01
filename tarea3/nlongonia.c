#include <stdio.h>
int main ()
{
    int xOrigin, yOrigin, xCoo, yCoo, querie = 1;
    while(querie!=0)
    {
        int i = 0;
        scanf("%d", &querie);
        if (querie == 0)
        {
            printf(" ");
        }
        else
        {
            scanf("%d %d", &xOrigin, &yOrigin);
            while (i < querie)
            {
                scanf("%d %d",&xCoo, &yCoo);
                if (xOrigin == xCoo || yOrigin == yCoo)
                {
                    printf("Divisa\n");
                }
                else if(xCoo < xOrigin && yCoo > yOrigin)
                {
                    printf("NO\n");
                }
                else if(xCoo > xOrigin && yCoo > yOrigin)
                {
                    printf("NE\n");
                }
                else if(xCoo > xOrigin && yCoo < yOrigin)
                {
                    printf("SE\n");
                }
                else
                {
                    printf("SO\n");
                }
                i++;
            } 
        }  
    }
}