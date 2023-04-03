#include <stdio.h>
struct Product{
 char name[20];
 float price;
 int quantity;
};
 
float get_total_price(struct Product list[]){
 float sum = 0;
 for(int i=0; i<6; i++){
 sum = sum + (list[i].price * list[i].quantity);
 }
 return sum;
}
 
int biggest_expense(struct Product list[]){
 float current_max = 0;
 int max_position = -1;
 for (int i=0; i<6; i++ ){
   if (current_max < list[i].price * list[i].quantity){
     current_max = list[i].price * list[i].quantity;
     max_position = i;
   }
 }
 return max_position;
}
 
int main(void) {
 struct Product shopping_list[6] = {
   {.name="eggs", .price=0.7, .quantity=12},
   {.name="rice", .price=2.3, .quantity=5},
   {.name="bread", .price=3.1, .quantity=2},
   {.name="juice", .price=4.25, .quantity=3},
   {.name="beans", .price=2.75, .quantity=7},
   {.name="sugar", .price=5.25, .quantity=2},
 };
 printf("Total price: %f\n", get_total_price(shopping_list));
 int ind = biggest_expense(shopping_list);
 printf("Biggest expense is/are %s, at %f\n", shopping_list[ind].name, shopping_list[ind].price * shopping_list[ind].quantity);
 
return 0;
}
