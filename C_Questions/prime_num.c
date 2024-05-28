#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: ",n);
    scanf("%d",&n);

    int prim = 1;
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0){
           prim=0;
        }
    }

    if(prim){
        printf("%d is a prime number",n);

    }else{
        printf("%d is not a prime number",n);
    }

    return 0;
}

