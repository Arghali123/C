//Register Storage Class
/*
1.)Suggests to the compiler that the variable be stored in a CPU register instead of RAM for faster access.
2.)Lifetime: Same as an auto variable (local to the block).
3.)Scope: Local to the block or function in which it is declared.
4.)Initialization: Not automatically initialized; contains garbage values if not explicitly initialized.
*/
#include <stdio.h>

void function() {
    register int i;  // Request to store i in a CPU register
    for (i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
}

int main() {
    function();
    return 0;
}

//Explanation: The register keyword requests the compiler to store the variable i in a CPU register, which may lead to faster access during repetitive operations, like loops. However, it's just a suggestion, and the compiler may ignore it if registers are unavailable.
//Scope: Local to the block or function in which it is declared.