#include<stdio.h>

//swap 2 numbers(by using a third variable)
int main ()
{
    int a,b;

    printf("Enter a: ",a);
    scanf("%d",&a);

    printf("Enter b: ",b);
    scanf("%d",&b);

    int temp = a;
    a=b;
    b=temp;

    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
     
    return 0;
}


//without using third variable
int main()
{
   int a,b;
    printf("Enter a: ",a);
    scanf("%d",&a);

    printf("Enter a: ",b);
    scanf("%d",&b);

    a= a+b;
    b= a-b;
    a= a-b; 
    
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
     
    return 0;
}