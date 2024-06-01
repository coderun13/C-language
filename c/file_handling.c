#include <stdio.h>
#include <stdlib.h>


//opening a file 
//fopen(<filename or path>, <opening-mode>)
int main(){
    FILE* ptr = fopen("c.txt","r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL)
        printf("%s",str);

}





















