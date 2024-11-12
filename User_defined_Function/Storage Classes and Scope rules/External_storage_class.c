//extern(External Storage Class)
/*
1.)Used to declare a variable that is defined elsewhere, usually in another file or earlier in the same file.
2.)Lifetime: Exists for the entire duration of the program (global).
3.)Initialization: Default is 0 for uninitialized extern variables.
4.)Scope: The variable can be accessed across multiple files (global).
*/

#include<stdio.h>
extern int count;//Declaration of an external variable
void function()
{
    count=10;//Modify the external variable
    printf("Inside function:count=%d\n",count);
}
int count=0;//Definition of the external variable
int main()
{
    function();
    printf("Inside main: count=%d\n",count);
    return 0;
}
//Explanation: The extern keyword tells the compiler that the variable count is defined somewhere else. In this case, count is defined later in the same file. The variable persists for the duration of the program and can be accessed and modified by multiple functions.
//Scope: Global across files or the entire program.