//
//  main.c
//  infa school x
//
//  Created by Michał Kiełkowski on 07/01/2021.
//

#include <stdio.h>


  
    
    int main(void) {
     int A[] = {1, 5, 2, 10, 15, 20, 17, 21, 13};
     int len = 7;
     int B[3][3] = {{1, 5, 2}, {10, 15, 20}, {17, 21, 13}};
     int val, l, h;
     val=A[0];
     l=0;
     h=0;
     for(int i=1; i<len; i++)
     {
         if(A[i]>val)
         {
             val=A[i];
             l=i;
         }
     }
     printf("%d", val);
     printf(" ");
     printf("%d", l);
     
     l=0;
     val=B[0][0];
     for(int i=0; i<3; i++)
     {
        for(int j=0; j<3; j++)
        {
            if(B[i][j]>val)
            {
                val=B[i][j];
                l=i;
                h=j;
            }
        }
     }
    printf("\n");
    printf("%d", val);
    printf(" ");
    printf("%d", l);
    printf(" ");
    printf("%d", h);

    }
