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
struct Patient patient1;
patient1.age = 20;
patient1.weight = 65.5;
patient1.height = 174;
struct Patient patient2 = {30, 180, 74.2};
struct Patient patient3 = {.weight=55.3, .height=150, .age=15};
display_patient_data(patient1);
display_patient_data(patient2);
display_patient_data(patient3);
 
return 0;
}
