#include <stdio.h>
#include <math.h>
int intlog(double base, double x) {
    return (int)(log(x) / log(base));
}
int main(){
    int m = 65;
    printf("%d", intlog(4., m));

}