#include <stdio.h>

//basic function
// void greet(){
//     printf("hello snehal\n");
//     printf("How are you");
//     return;
// }

// int main() {
//     greet();
//     return 0;
// }

//add function
int add(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    printf("enter first number",a);
    scanf("%d",&a);
    printf("enter second number",b);
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}