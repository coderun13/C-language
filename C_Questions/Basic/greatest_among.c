#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter first Number: ",a);
    scanf("%d",&a);

    printf("Enter second Number: ",b);
    scanf("%d",&b);

    printf("Enter third Number: ",c);
    scanf("%d",&c);

    if(a>b || a>c){
        printf("%d is the greatest",a);

    }else if(b>a && b>c){
        printf("%d is the greatest",b);

    }else{
        printf("%d is the greatest",c);
    }
    
    return 0;
}