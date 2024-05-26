#include<stdio.h>

//fibonacci series - 1 1 2 3 5 8...(1,1+1,1+2,3+2,...) 

int fibo(int n){
    if(n==1 || n == 2) return 1; //(n<=2) base case
    return fibo(n-1) + fibo(n-2);
}

int main()
{
   int n;
   printf("enter a number: ");
   scanf("%d",&n);
   printf("%d", fibo(n));
   return 0;
}