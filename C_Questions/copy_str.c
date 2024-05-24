#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello Snehal!";
    char newstr[50];
    strcpy(newstr,str);
    printf("str: %s\n",str);
    printf("new str: %s\n",newstr);
    return 0;
}