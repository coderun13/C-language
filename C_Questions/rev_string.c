#include<stdio.h>
#include<string.h>

  void reverseString(char* str)
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while(start<end){
        temp = str[start];
        str[start]= str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main(){
    char str[] = "madam";
    printf("str: %s\n",str);
    reverseString(str);
    printf("reversed string: %s\n", str);
    return 0;
}