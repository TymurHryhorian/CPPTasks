#include <stdio.h>

int threeNplusOne(n){
    for(int i = 1; i < n; i++){
        int t = i;
        while(t != 1){
            if(t % 2 == 0){
                t /= 2;
            } else {
                t *= 3;
                t += 1;
            }
        }
        printf("%d ends with 1\n", i);
    }
}

int main(){
    int n = 1000;
    threeNplusOne(n);
}