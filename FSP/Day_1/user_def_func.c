#include<stdio.h>
int main (void) {

    //declaring variables
    int num1, num2, num3, total;
    int user_input(void);
    int my_subtraction(int,int);
    int my_display(int,int,int);
    void my_exit(void);
    void my_welcome(void);

    num1 = user_input();
    num2 = user_input();
    total = my_subtraction(num1,num2);

    my_display(num1, num2, total);
    my_exit();

}

//welcome function
void my_welcome(void){
    printf("\n Welcome to the World of programming");
}

//input function
int user_input(void){
    int number;
    printf("please enter the number: ");
    scanf("%d",&number);
    return number;
}

//addition function
int my_subtraction(int n1, int n2){
    printf("performing the sum operation...");
    return(n1 - n2);
}

//display function
int my_display(int a, int b, int tot) {
    printf("\n Displaying the result...");
    printf("%d - %d = %d...\n",a,b,tot);
}

//exit function
void my_exit(void){
    printf("end of program");
}