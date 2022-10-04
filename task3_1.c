#include <stdio.h>

int main(){
    int x, a, b, c;
    scanf("%u", &x);
    a = x%10;
    x /= 10;
    b = x%10;
    x /= 10;
    c = x%10;
    printf("%u - odynitsy\n%u - desyatky\n%u - sotni\n", c, b , a);
    printf("%u - suma cyfr\n", a+b+c);
    if(a == 0){
        if (b == 0){
            printf("%u", c);
        }
        else{
            printf("%u%u", b, c);
        }
    } else{
        printf("%u%u%u", a, b, c);
    }
}