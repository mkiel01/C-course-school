#include <stdio.h>

int main(void) {
int some_variable = 5;
int some_other_variable = some_variable;
int *example_pointer = &some_variable;

printf("%d %d %d\n", some_variable,
                      some_other_variable,
                      *example_pointer);
 some_variable = some_variable*2;

printf("%d %d %d\n", some_variable,
                    some_other_variable,
                    *example_pointer);

*example_pointer = *example_pointer*2;

printf("%d %d %d\n", some_variable,
                    some_other_variable,
                    *example_pointer);
return 0;
}
