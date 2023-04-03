#include <stdio.h>
 
void test_arr(int a[]){
 a[1] = a[1]*2;
}
 
int test_var(int x){
 x = x*2;
 return x;
}
 
int main(void) {
 int A[] = {1, 5, 9};
 printf("%d\n", A[1]);
 test_arr(A);
 printf("%d\n", A[1]);
 
 printf("\n var \n");
 int a = 5;
 printf("%d\n", a);
 a = test_var(a);
 printf("%d\n", a);
}
