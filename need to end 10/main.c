#include <stdio.h>
#include <math.h>
 
int main(void) {
float side1 = 20;
float side2 = 30;
float area = rectangle_area(side1, side2);
printf("area %f \n", area);
float circumference = rectangle_circumference(side1, side2);
printf("circumference %f \n", circumference);
float longer_side = rectangle_longer_side(side1, side2);
printf("longer side %f \n", longer_side);
}
