#include <stdio.h>
int func(int a, int b)
{
    auto int sum;
    sum = a+b;
    return sum;
}
int main()
{
    int sum = func(3,5);
    printf("the sum is %d\n",sum);
    return 0;
}


//Declaration- Tellng the complier about the variable (no space reserved)
//Definition-  declaration + space reservation


/* Storage class defines scope, default initial value and lifetime of a variable.
 * Scope - where this variable is available
 * Default initial value - if we don't define the inital value, then what will be the value
 * Lifetime - life of that variable
*/


/* Storage class are most oftenly used in
 * Automatic variables
 * external variables
 * static variables
 * Register variables
*/


/* Auto storage class - 
 * variable defined without any storage class specification.(eg- int snehal,auto int snehal are same)
 * scope- local to the function body they sre defined to
 * default value - garbage value
 * lifetime- till the end of the functin block they are defined in
*/


/* External Storage class - 
 * same as global variables
 * Global variable can be changed by a function in the program
 * scope - global to the program they are defined in
 * default initial value: 0
 * lfetime - declared outside the function,available throughout the lifetime of the program.
 * Extern keyword- used to inform C complier that a given variable is declared somewhere else.
 * Using extern will not allocate space for the variable
 * 
*/


/* Static storage class- 
 * remains under existence for use within the function for entire program run.
 * scope- local to the block they are defined in
 * default initial value: 0 
 * lifetime - available throughtout the lifetime 
 * minimize the use of unnecessary static variables in a program
*/


/* Register storage class -
 * requests the complier to store the variable in the CPU register instead of storing in the memory to have faster access.
 * Done for the variables which are being used frequently.
 * scope - local to the function they are declared in
 * default initial value- Garbage value
 * lifetime - available till the end of the function block.
*/