//
//  main.c
//  school 7.01
//
//  Created by Michał Kiełkowski on 07/01/2021.
//

#include <stdio.h>


    void show_arr(int A[], int arr_length){
    for(int i = 0; i < arr_length; i++){
    printf("%d\n", A[i]);
    }
    }
    int main(void){
    int A[] = {3, 5, 1, 2, 8, 7};
    int array_length = 6;
    int temp;
    int is_sorted = 0;
    int swap_counter;
     
    show_arr(A, 6);
    printf("\n");
    
    while (!is_sorted){
    swap_counter = 0;
    for (int i=0; i < array_length-1; i++){
     if (A[i] < A[i+1]){
       temp = A[i+1];
       A[i+1] = A[i];
       A[i] = temp;
       swap_counter++;
     }
    }
    if (swap_counter==0) is_sorted=1;
    }
     
    show_arr(A, 6);
    }
   


