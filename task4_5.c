#include <stdio.h>

int main(){
    unsigned long long n = 6, fact = 1;
    for(int i = 2-(n%2); i <= n; i+=2){
        fact *= i;
    }
    printf("y=%llu", fact);
}