# include<stdio.h>

//check the number is palindrome or not
int main(){

int n, rem,result = 0,q;
printf("Enter a number : ");
scanf("%d",&n);

q = n;
while(q!= 0)
{
    rem = q%10;
    result = result*10+rem;
    q= q/10;
}
if(result == n){
    printf("it is a palindrome");

}else{
    printf("it is not a palindrome");
}
return 0;

}