#include<stdio.h>
#include<string.h>

//find character from string with the help of pointer
int main(){
 char str[] = "snehal singh";
 char* ptr = str; //pointer is set at the beginning of the string

    while(*ptr != '\0') //Iterate until end of the string
    {
        if(*ptr =='s') //checking if the char is s
        {
        printf("s is found at the address: %p\n",ptr); //print the address
        }
        ptr++; //move pointer to the next char
    }
 return 0;
}