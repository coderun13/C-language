#include<stdio.h>

// factorial by recursion

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
}
