//The storage class of a variable determines it's scope,it's duration and it's linkage.Storage durartion-how
//long a vaiable exists in memory.Scope-where the variable can be referenced in program.Linkage-specifies the 
//files in which the variable is known.

//The storage class of a variable also is determined by the position of it's declaration in the source file and
//by the storage class specifies with auto,extern,static,register keywords.A variable's storage class tells us:
/*
1.)Where the variable would be stored.
2.)What will be the initial value of the variable,if initial value is not specifically assigned.(i.e. the default
initial value).
3.)What is the scope of the variable;i.e in which functions the value of the variable would be available.
4.)What is the life of the variable;i.e how long would the variable exist.
*/

//Scope Rules
/*
The Scope of the variable can be defined as the region over which the variable is visible or valid.Life time is 
the period of time during which memory is associated with a variable is called the life time or extent of a variable.
*/

//Scope Rules
/*
1.)File Scope:Identifiers declared outside function,known in all functions.File scope variables are used for global
variables,function definitions,function prototypes.

2.)Function Scope:Can be referenced inside a function body.These are used only for labels(start:,case:,etc).

3.)Block Scope:Identifier declared inside a block.Block scope begins at declaration,ends at right brace.Used
for variables,function parameters(local variables of function).Outer blocks "hidden" from inner blocks if there
is a variable with the same name in the inner block.

4.)Function prototype scope:Used for identifiers in parameter list
*/
