//Automatic Storage Class(auto)
/*
Default storage class for local variables.
Variables are local to the function in which they are defined.
Lifetime: The variable exists only during the execution of the block in which it is defined (inside a function).
Initialization: Not automatically initialized; it contains garbage values if not initialized explicitly.
*/

#include <stdio.h>

void function() {
    auto int x = 10;  // auto is optional, x is a local variable
    printf("Inside function: x = %d\n", x);
}

int main() {
    function();
    // x is not accessible here
    return 0;
}

//Explanation: x is a local variable with the auto storage class. It is created and initialized when function() is called, and it is destroyed when the function completes. Outside function(), x is not accessible.

//Scope: Local to the block/function in which it's declared.