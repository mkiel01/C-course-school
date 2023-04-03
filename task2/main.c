
#include <stdio.h>
#include <string.h>

int main(){
    int N;
    char user[200];
    scanf("%s", user);
    scanf ("%d", &N);
    char quantity[N+1];
    quantity[N+1] = '\0';
    strcpy(quantity, user); 
    printf("size(quantity) = %lu\n", sizeof(quantity));
    printf("quantity = {%s}\n", quantity);
    return 0;
}
