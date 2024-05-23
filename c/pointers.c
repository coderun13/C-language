#include <stdio.h>

/*
 * Pointers =  It stores the address of the variable(* is used for pointers)
 * %p is used for address printing
*/

/*int main(){
    int a = 5;
    int* x = &a;
    *x =7 ;//stored address ka value change
    printf("%p\n",x);// x k ander wale stored chiz ka address
    printf("%p\n",&x);// x ka address
    printf("%d\n",*x);// x k ander jiska address hai uska value print kro
    return 0;
}*/


//swap 2 numbers(pass by refernce)

/*void swap(int* x, int* y){
    int temp;
    temp = *x; //temp = value of x
    *x= *y;
    *y= temp; //y = value of temp 
    return;
}

int main ()
{
    int a,b;
    printf("Enter a: ",a);
    scanf("%d",&a);

    printf("Enter b: ",b);
    scanf("%d",&b);

    swap(&a,&b);
    
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
     
    return 0;
}*/


//double pointers
/*int main()
{
    int a = 5;
    int* x = &a;//int* -> int ka address
    int** y= &x;//int** -> int* ka address 
    printf("%p\n",&x);
    printf("%p\n",y);
    printf("%p\n",&y);
    printf("%d\n",a);
    printf("%d",**y);// x k address pe jo address hai uspe jake uska value batao

    return 0;
}*/

