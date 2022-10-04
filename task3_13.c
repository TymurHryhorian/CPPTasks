#include<stdio.h>
#include<math.h>
int main()
{
    const double A=4,B=6,C=13;
    const double eps = 0.000000001;
    const double D=2,E=3,F=8;
    const double det=A*E-B*D;
    if(fabs(det) <= eps){
      if(fabs(B*F - C*E) <= eps){
        printf("(x,y) has infinity solutions");
      } else {
        printf("(x,y) - 0 solutions");
      }
    } else {
      const double X=(C*E-B*F)/det;
      const double Y=(A*F-C*D)/det;
 
      printf("x = %lf y = %lf", X, Y);
    }
}
