//
//  main.c
//  
//
//  Created by Michał Kiełkowski on 16/02/2021.
//

#include <stdio.h>
#include <string.h>
struct person_t{
    char*name;
    int age;
};

int person_compare(struct person_t person1, struct person_t person2)
if ((person1.name == person2.name) &&
    (person1.age == person2.age)){
return 0;
}
else{
return 1;
}
int main() {

    struct person_t people[3] = {
        {"Michal", 10},
        {"Jakub", 12},
        {"Artur", 13}
    };
    printf("person_comapre=%d\.", person_compare(people[0],people[1]));
    return 0;
}

