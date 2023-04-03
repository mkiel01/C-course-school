#include <stdio.h>
 
struct Patient {
 int age;
 int height;
 float weight;
};
 
void display_patient_data(struct Patient patient_data){
printf("Age: %d\n", patient_data.age);
printf("Weight: %f\n", patient_data.weight);
printf("Height: %d\n\n", patient_data.height);
}
 
int main(void) {
 
struct Patient patient_database[5] = {
{.age=10, .height=130, .weight=40.1},
{.age=20, .height=180, .weight=70.9},
{.age=15, .height=150, .weight=50.2},
{.age=70, .height=190, .weight=75.3},
{.age=55, .height=171, .weight=64.2},
};
 
for(int i=0; i<5; i++){
 display_patient_data(patient_database[i]);
}
 
 
printf("%f\n", patient_database[2].weight);
 
return 0;
}
