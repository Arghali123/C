//5. Program Illustrating Use of Local, Global, and Static Variables
#include <stdio.h>

int global_var = 10;

void display() {
    static int static_var = 5;
    int local_var = 3;
    printf("Global: %d, Static: %d, Local: %d\n", global_var, static_var, local_var);
    static_var++;
    local_var++;
}

int main() {
    printf("First call:\n");
    display();
    printf("Second call:\n");
    display();
    return 0;
}