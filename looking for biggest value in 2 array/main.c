//
//  main.c
//  infa szkola 222
//
//  Created by Michał Kiełkowski on 07/01/2021.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int arr[3][3] = {{1, 5, 2},
                    {10, 15, 20},
                    {17, 21, 13}};
    int i;
    int j;
    int max = arr[0][0];
    int max_i;
    int max_j;
    
    for (i = 0; i < 3; i++)
    {
       
        for (j = 0; j < 3; j++)
        {
            
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                max_i = i;
                max_j = j;
                }
        }
    }
    printf("%d\n", max);
    printf("[%d][%d]", max_i, max_j);
    
    return 0;
}
