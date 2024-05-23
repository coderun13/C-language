#include <stdio.h>
#include<math.h>

//basic function
/*void greet(){
    printf("hello snehal\n");
    printf("How are you");
    return;
}

int main() {
    greet();
    return 0;
}*/


//add function
/*int add(int a, int b){
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
}*/


//library function
/* int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);

    int root = sqrt(a);
    printf("the square root is : %d",root);

    return 0;
}*/


//P and C
/* int factorial(int x){
    int fact = 1;
    for (int i = 2; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}
    int main(){
       int n;
       printf("enter n: ");
       scanf("%d",&n); 
        int r;
       printf("enter r: ");
       scanf("%d",&r); 
        int nfact = factorial(n);
        int rfact = factorial(r);
        int nrfact = factorial(n-r);

        int ncr = nfact/(rfact*nrfact);
        printf("%d",ncr);
        return 0;
    }*/


//pasacal triangle
/*int factorial(int x){
    int fact = 1;
    for (int i = 2; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}
 
 int combination(int n,int r){
    int ncr = nfact/(rfact*nrfact);
    return 0;
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
       printf("enter r: ");
       scanf("%d",&r); 
    for(int i=0;i<=n;i++);
        for(int j=0;j<=i;j++);
        printf("*");
    return 0;

}*/


//swap 2 numbers(by using a third variable)
/*int main ()
{
    int a,b;

    printf("Enter a: ",a);
    scanf("%d",&a);

    printf("Enter a: ",b);
    scanf("%d",&b);

    int temp = a;
    a=b;
    b=temp;

    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
     
    return 0;
}*/

//without using third variable
/*int main()
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
}*/

/*
* Pass by value = giving values to the variables
* pass by reference = passing address to use
* scope = limit of a variable
* formal parameters = variables used are just formal parameters
* actual parameters = values are actual parameters
*/



