#include<stdio.h>

//number of order n is a number in which each digit is multiplied by itself n number of times and finally added together,results the same number.
int main(){
    int number, count = 0, result= 0, mul=1, cnt,rem;
    printf("enter a number: ");
    scanf("%d",&number);

    int q = number;
    while(q!=0){
        q = q/10;
        count++; //find the order (eg. 371, order is 3)
    }
    cnt = count;
    q = number;

    while(q!= 0)
    {
        rem = q%10;
        while(cnt!=0)
        {
            mul = mul*rem;//multiply single digit by itself n times (7*7*7)
            cnt--;
        }
        result = result + mul;//add the answer(1+7*7*7+3*3*3)
        cnt = count;
        q = q/10;
        mul = 1;
    }
    if(result == number)
        printf("%d is an armstrong number",number);
    else
        printf("%d is not an armstrong number",number);
    return 0;
}