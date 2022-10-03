# include<stdio.h>
# include<math.h>

void a (){
    float a,b,c,r1,r2,d;
    // не треба робити епсилон якщо флоат
    printf ("enter the values of a b c");
    scanf (" %f %f %f", &a, &b, &c);
    d= b*b - 4*a*c;
    if (d>0){
        r1 = -b+sqrt (d) / (2*a);
        r2 = -b-sqrt (d) / (2*a);
        printf ("The real roots = %f %f", r1, r2);
    }
    else if (d==0){
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf ("roots are equal =%f %f", r1, r2);
    }
    else{
        printf("Roots are imaginary");
    }
}


void b (){
    float a,b,c,r1,r2,d;
    // не треба робити епсилон якщо флоат
    printf ("enter the values of a b c");
    scanf (" %f %f %f", &a, &b, &c);
    d= b*b - 4*a*c;
    if (d>0){
        r1 = -b+sqrt (d) / (2*a);
        r2 = -b-sqrt (d) / (2*a);
        if (r1 > 0){
            printf ("The real roots = %f %f\n", sqrt(r1), -sqrt(r1));
        } else if(r1 == 0){
            printf ("The real roots = %f\n", sqrt(r1));
        }
        if (r2 > 0){
            printf ("The real roots = %f %f", sqrt(r2), -sqrt(r2));
        } else if(r2 == 0){
            printf ("The real roots = %f\n", sqrt(r2));
        }
        if (r1 < 0 && r2 < 0){
            printf("Roots are imaginary");
        }
    }
    else if (d==0){
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        if (r1 > 0){
            printf ("The real roots = %f %f\n", sqrt(r1), -sqrt(r1));
        } else if(r1 == 0){
            printf ("The real roots = %f\n", sqrt(r1));
        } else {
            printf("Roots are imaginary");
        }
    }
    else{
        printf("Roots are imaginary");
    }
}
int main (){
    a();
    b();
}