#include <stdio.h>
int main ()
{
    int i, dgreeCounter = 120;
    int input[4];
    for(i = 0; i < 4; i++)
    {
        scanf("%d",&input[i]);
    }
    if (input[0] >= input[1])
    {
        dgreeCounter += input[0] - input[1];
    }
    else
    {
        dgreeCounter += input[0] + (40 - input[1]);
    }
    if(input[1] <= input[2])
    {
        dgreeCounter = input[2] - input[1];
    }
    else
    {
        dgreeCounter = input[2] + (40 - input[1]);
    }
    if(input[2] >= input[3])
    {
        dgreeCounter += input[2] - input[3];
    }
    else
    {
        dgreeCounter += input[2] + (40 - input[3]);
    }
    printf("%d\n", dgreeCounter * 9);
}