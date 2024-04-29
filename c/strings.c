//Strings - charcter arrays

/*
 #include<stdio.h>
    int main(){
    char arr[5] = {'a','b','c','d','e'};
    printf("%c",arr[2]);
    return 0;
}
*/

/* 
#include<stdio.h>
    int main(){
    char arr[] = {'h','e','l','l','o','!'};
    int i = 0;
     while(arr[i]!= '!'){
        printf("%c",arr[i]);
        i++;
     }
     return 0;
};
*/

/* 
#include<stdio.h>
    int main(){
    char arr[] = {"Hello Snehal\0"};
    int i = 0;
     while(arr[i]!= '\0'){
        printf("%c",arr[i]);
        i++;
     }
     return 0;
};
*/


//gets(), puts() (for string)
//%s - format specifier for string

/* 
  #include<stdio.h>
  #include<string.h>
    int main(){
    char str[] = "snehal singh";
    char str[40];

    scanf("%s",str); //only the first word will be considered.
    gets(str); //entire sentence can be taken as input
    
    printf("the input was: %s",str);
    puts(str);

return 0;
}
*/


// strings as pointers

#include<stdio.h>
#include<string.h>
int main(){
   char str[] = "snehal singh";
   char* ptr = str;
   int i = 0;
   while(*ptr!= '\0'){
    printf("%c",*ptr);
    ptr++;
    i++;
   }
   return 0;
}

   /* char str[] = "snehal singh";
   char* ptr = str; //ptr now points to str[0]
   char* ptr = &str[0];
    printf("%p",ptr);
    return 0;*/

