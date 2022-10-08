#include <stdio.h>

int main(){
    int n = 2;
    double s = sqrt(2);
    for(int i=1;i<n;i++)
        s=sqrt(s+2);
    printf("%lf", s);

    int n = 3;
    double s = sqrt(3*n);
    for(int i=n-1;i>0;i--)
        s=sqrt(s+3*(i));
    printf("%lf", s);
}