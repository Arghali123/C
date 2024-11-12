//Static Storage class
/*
1.)Used to retain the value of a variable across function calls or to limit the scope of a global variable to the file in which it is declared.
2.)Lifetime: Exists for the entire duration of the program (global), but its scope is limited to the block or function where it is declared.
3.)Initialization: Automatically initialized to 0 if not explicitly initialized.
*/

#include <stdio.h>

void function() {
    static int x = 0;  // Static local variable retains its value between function calls
    x++;
    printf("x = %d\n", x);
}

int main() {
    function();  // x is incremented to 1
    function();  // x is incremented to 2
    function();  // x is incremented to 3
    return 0;
}

//Explanation: The static variable x is local to the function() but retains its value between function calls. Unlike an auto variable, which is reinitialized every time the function is called, x is initialized only once, and its value persists.
//Scope: Local to the function but exists throughout the program.