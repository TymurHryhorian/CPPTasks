#include <stdio.h>

int main(){
    int x1 = -99, x2 = x1, x3 = x1, temp;
    while(x1 < 0){
        x3 += x1 + 100;
        temp = x2;
        x2 = x3 - x1 - 100;
        x1 = temp;
    }
    printf("x=%d", x1);
}