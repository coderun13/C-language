#include <stdio.h>

/**
 * Reccurence Relation
*/

/* factorial by recursion

int factorial(int n){
    if(n==1 || n==0) return 1;
    int recAns = n*factorial(n-1);
    return recAns;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   int fact = factorial(n);
   printf("%d",fact);
   return 0;
}*/


//Print number n to 1

// int factorial(int n){
//     if(n==1 || n==0) return 1;
//     int recAns = n*factorial(n-1);
//     return recAns;
// }

// int main()
// {
//    int n;
//    printf("enter a number: ");
//    scanf("%d",&n);
//    int fact = factorial(n);
//    printf("%d",fact);
//    return 0;
// }

//greeting 

void greeting(int n){
    if(n==0) return;
    printf("Good Evening Snehal\n");
    greeting(n-1);
    return;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   greeting(n);
   return 0;
}









