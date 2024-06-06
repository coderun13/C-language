#include<stdio.h>
# include<string.h>

//strlen() function is used to determine the length of the given string.
//doesn't count NULL character

/*int main(){
    char* str = "Snehal Singh,Welcome";
    printf("The length of string is: %d", strlen(str));
    return 0;
}*/


int main(){
    char str[100] = "Snehal Singh,Welcome";
    printf("The length of string is: %d", strlen(str));
    return 0;
}