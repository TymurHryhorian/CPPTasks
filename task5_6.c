#include <stdio.h>

double func_a(int n, double b){
    if(b <= 0){
        return 0;
    }
    double res = b;
    for(int i = 1; i < n; i++){
        res = b + 1.0/res;
    }
    return res;
}

double func_b(int n, double b){
    if(b <= 0){
        return 0;
    }
    double res = b;

    int nominator = b;
    int denominator = 1;
    for(int i = 1; i < n; i++){
        denominator = nominator;
        nominator = b*nominator + denominator;
    }
    return nominator;
}

int main(){
    int n = 10;
    double b = 2;
    int arr = func_b(n, b);
    printf("%d", arr);
    
}