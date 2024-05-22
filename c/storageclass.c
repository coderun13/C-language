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


