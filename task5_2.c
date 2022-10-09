#include <stdio.h>

int main(){
    int n = 1;
    double a = 1000;
    double f1 = 0, f2 = 1, s = 0, t;

    if (a < 1){
        s = 0;
    } else {
        while(f2 <= a){
            t = f2;
            s += f2;
            f2 = f2 + f1;
            f1 = t;
            
        }
    }
    printf("%lf", s);
}