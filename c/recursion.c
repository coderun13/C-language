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


//Print number 1 to n(increasing)

/*void increasing(int x, int n){
    if(x>n) return; //base case
    printf("%d\n",x); //message to print
    increasing(x+1,n); //recursive call
    return;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   increasing(1,n);
   return 0;
}*/


//Print number n to 1(decreasing)

/*void decreasing(int n){
    if(n==0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   decreasing(n);
   return 0;
}*/


//greeting 

 /*void greeting(int n){
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
 }*/


//1-n (after recursive call)

/*void increasing(int n){
    if(n==0) return; //base case
    increasing(n-1);
    printf("%d\n",n);
    return;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   increasing(n);
   return 0;
}*/


//n-1 (after recursive call)

/*void decreasing(int x, int n){
    if(x>n) return; //base case
    decreasing(x+1,n); //recursive call
    printf("%d\n",x); //message to print
    return;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   decreasing(1,n);
   return 0;
}*/


//n-1 then 1-n (after recursive call)(123 321)

/*void decreasing(int x, int n){
    if(x>n) return; //base case
    printf("%d\n",x); //message to print
    decreasing(x+1,n); //recursive call
    printf("%d\n",x); //message to print
    return;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   decreasing(1,n);
   return 0;
}*/


//sum of 1 to n(parameterised)

/*void sum(int n, int s){
    if(n == 0){
        printf("%d",s);
        return;
    }
    sum(n-1,s+n);
    return;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   sum(n,0);
   return 0;
}*/


//sum of 1 to n (return type)

/*int sum(int n){
    if(n==1 || n==0) return n;
    int recAns = n+sum(n-1);
    return recAns;
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   int s = sum(n);
   printf("%d",s);
   return 0;
}*/


// a raised to power b by recursion

/*int power(int a, int b){
    if(b == 0) return 1;
   int recAns = a* power(a,b-1);
    return recAns;
}

int main()
{
   int a,b;
   printf("enter value of base: ");
   scanf("%d",&a);
   printf("enter value of power: ");
   scanf("%d",&b);
   int p = power(a,b);
   printf("%d raised to power %d =  %d ",a,b,p);
   return 0;
}*/


//power function (log approach)

//stair path
//maze path
//zig zag
//tower of hanoi