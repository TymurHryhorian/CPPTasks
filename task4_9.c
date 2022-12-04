#include <stdio.h>

int main(){
    unsigned long long n = 1234123, two = 1, r = 0;
    while(two <= n){
        two*=2;
        r++;
    }
    printf("%llu %llu", two, r);
}