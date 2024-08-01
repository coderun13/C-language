#include<stdio.h>
int main (void) {

    //declaring variables
    int num1, num2, num3, total;
    int input(void);
    int my_addition(int,int);
    void my_display(int,int,int);

    num1 = my_input();
    num2 = my_input();
    total = my_addition(num1,num2);

    my_display(num1, num2, total);
    printf("end of program");

}

//input function
int my_input(void){
    int number;
    printf("please enter the number: ");
    scanf("%d",&number);
    return number;
}

//addition function
int my_addition(int n1, int n2){
    printf("performing the sum operation...");
    return(n1 + n2);
}

//
void my_display(int a, int b, int tot) {
    printf("\n Displaying the result...");
    printf("%d + %d = %d...\n",a,b,tot);
}