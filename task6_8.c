#include <stdio.h>

int main(){
    unsigned int m;
    int j;
    printf("m=");
    scanf("%u", &m);
    printf("j=");
    scanf("%d", &j);
    m = m & ~(1<<j);
    printf("%d\n", m);
    printf("%x", m);
}