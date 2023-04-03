#include <stdio.h>
 
void analyze_rectangle(int side1, int side2, int* area, int* circ){
 *area = side1*side2;
 *circ = 2*side1 + 2*side2;
}
 
int main(void) {
 int a = 4;
 int b = 10;
 int area_value = 0;
 int circ_value = 0;
 int* area_pointer = &area_value;
 int* circ_pointer = &circ_value;
 
 printf("%d, %d\n", area_value, circ_value);
 analyze_rectangle(4, b, &area_value, &circ_value);
 printf("%d, %d\n", area_value, circ_value);
 
 
 return 0;
}
