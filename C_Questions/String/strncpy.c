#include<stdio.h>
#include<string.h>

/*int main(){
    char str[] = "Hello Snehal!";
    char newstr[50];
    strcpy(newstr,str);
    printf("str: %s\n",str);
    printf("new str: %s\n",newstr);
    return 0;
}*/

/*int main(){
    //string copy function
    char str1[20] = "hello snehal";
    char str2[20];
    printf("%s\n", strcpy(str2,str1));
    printf("%s", str2);
    return 0;
}*/

/*int main(){
    char str1[10] = "Hello";
    char str2[10];
    char str3[10];

    strcpy(str3,strcpy(str2,str1));
    printf("%s %s", str2, str3);
    return 0 ;
}*/

//strcpy(str1,str2), no way to check whether the string pointed by str2 will fit in str1,
// to avoid this use strncpy function

int main(){
    char str1[6] = "hello";
    char str2[6];
    strncpy(str2, str1, sizeof(str2));
    str2[sizeof(str2)-1]= '\0';
    printf("%s",str2);
    return 0;
}