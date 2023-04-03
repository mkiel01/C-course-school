#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* ax^2+bx+c=0;
delta=b^2-4ac;
if delta>0 then x1=[-b - sqr(delta)]/2a, x2=[-b + sqr(delta)]/2a;
If delta=0 then x=-b/2a
If delta<0 then no solution
sqrt(number)
*/
 
void solve_quadratic_equation(float a, float b, float c){
float delta = (b*b-4*a*c);
if (delta>0){
float x1,x2;
x1 = (-b - sqrt(delta))/(2*a);
x2 = (-b + sqrt(delta))/(2*a);
printf(“%f, %f”, x1, x2);
//printf(x1 + “,” + x2);
}
else if (delta==0){
float x;
x=-b/(2*a);
printf(“%f”, x);
}
else{
printf(“no solution”);
}
}
 
int main(void) {
 float a = 2;
 float b = 3;
 float c = 4;
 solve_quadratic_equation(a, b, c);
return 0;
}
