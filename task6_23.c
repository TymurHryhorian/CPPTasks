#include <stdio.h>

int main(){
    int k;
    printf("k=");
    scanf("%d", &k);
    int zeroLen = 0;
    for(int i = 0; i < 8*sizeof(k); i++){
        if(((k >> i) & 1) == 0){
            zeroLen++;
        }
    }
    printf("Len=%d", zeroLen);
}