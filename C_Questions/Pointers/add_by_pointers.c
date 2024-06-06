#include <stdio.h>

int main(){
    int num1,num2;
    int sum,mul,diff,div;
    int *ptr1,*ptr2;

    ptr1= &num1;
    ptr2 = &num2;

    printf("enter two numbers: ");
    scanf("%d %d",ptr1,ptr2);

    sum = (*ptr1) + (*ptr2);
    diff= (*ptr1) - (*ptr2);
    mul = (*ptr1) * (*ptr2);
    div = (*ptr1) / (*ptr2);


    printf("Sum = %d\n", sum);
    printf("difference = %d\n", diff);
    printf("product = %d\n", mul);
    printf("quotient = %d", div);
}
















