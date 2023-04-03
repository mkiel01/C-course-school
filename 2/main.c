//
//  main.c
//  infa school 14.01
//
//  Created by Michał Kiełkowski on 14/01/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void power(int* value, int exponent)
{
 int x = *value;
 for(int i=2; i<=exponent; i++)
 {
     *value= *value * x;
 }
}

int analize(int s1, int s2, int s3, int* cir)
{
    if((s1<s2+s3)&&(s2<s1+s3)&&(s3<s2+s1))
    {
        *cir=s1+s2+s3;
        return 1;
    }
    else
    {
        *cir=-1;
        return 0;
    }
}

void swap(int* a, int* b)
{
    int c= *a;
    *a=*b;
    *b=c;
}

int main(){
 int exp = 5,nb = 2;
 int* number = &nb;

 int side1=2,side2=2,side3=3, circumference;
 int* circ= &circumference;

 int a = 5, b=3;
 int* ap=&a;
 int* bp=&b;

 power(number, exp);
 printf("%d \n", nb);

 int is=analize(side1, side2, side3, circ);
 printf("%d %d \n", is, circumference);

 swap(ap, bp);
 printf("%d %d \n", a, b);
    printf("this");
 return 0;
}
