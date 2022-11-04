#include <stdio.h>
#include <stdlib.h>
#define MaxLength 256
int main()
{
    int k, i, j, NotBegin = 0;
    double x;
    int Tcurr[MaxLength+1], Tprev[MaxLength+1];
    printf("Enter number k: ");
    scanf("%d", &k);
    printf("Enter number x: ");
    scanf("%lf", &x);
    for(i = 0; i <= MaxLength; i++)
    {
        Tprev[i] = Tcurr[i] = 0;
    }
    Tprev[0] = 1; // T[0] = 1.
    Tcurr[1] = 1; // Т[1] = X.
    for(i = 2; i <= k; i++)
    {
        int buffer[MaxLength+1]; 
        for(j = 0; j <= MaxLength; j++)
        {
            buffer[j] = Tcurr[j];
        }
        for(j = MaxLength; j > 0; j--)
        {
            Tcurr[j-1] *= 2;       
            Tcurr[j] = Tcurr[j-1];  
        }

        Tcurr[0] = 0;

        for(j = 0; j <= MaxLength; j++)
        {
            Tcurr[j] -= Tprev[j];
        }
        for(j = 0; j <= MaxLength; j++)
        {
            Tprev[j] = buffer[j];
        }
    }

    for(i = MaxLength; i >= 0; i--)
    {
        if(Tcurr[i])
        {
            if(Tcurr[i] > 0 && NotBegin)
                printf("+");
            printf("%d", Tcurr[i]);
            if(i)
                printf("x^%d", i);
            NotBegin = 1;
        }
    }
    double t = 1., sum = 0;
    for(i = 0; i < MaxLength; i++){
        sum += Tcurr[i] * t;
        t *= x;
    }
    printf("\nF(x)=%lf", sum);
}