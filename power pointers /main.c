#include <stdio.h>
 
void pow2(int a){
 a = a*a;
}
 
void working_pow2(int* a){
 *a = *a * *a;
}
int main(void) {
 int a = 4;
 printf("%d\n", a);
 pow2(a);
 printf("%d\n", a);
 working_pow2(&a);
 printf("%d\n", a);
 
 return 0;
}
