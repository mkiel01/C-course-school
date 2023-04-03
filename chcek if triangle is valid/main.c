#include <stdio.h>
int check_triangle(int a, int b, int c){
 if (a+b>c && a+c>b && b+c>a) return 1;
 else return 0;
}


int main(void) {
 int side1, side2, side3;
 side1 = 2;
 side2 = 2;
 side3 = 2;
 int is_valid = check_triangle(side1, side2, side3);
    if (is_valid)
     printf("triangle is valid");
 else printf("triangle is invalid");
return 0;
}

