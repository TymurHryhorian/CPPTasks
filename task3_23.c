#include <stdio.h>
#include <math.h>
#include <float.h>
double f(double x, double a)
{
  if( isinf(a*(exp(x)-1))){
    return DBL_MAX;
  }
  return a*(exp(x)-1);
}
 
int main()
{ 
    double x, a, h, fc;
    a = 2;
    x = 10; 
    h = 0.00000000001; 
    fc = (f(x + h, a) - f(x - h, a)) / (2 * h); 
    
    printf("%lf", fc);
}