//Strings - charcter arrays

#include<stdio.h>
/*int main(){
    char arr[5] = {'a','b','c','d','e'};
    printf("%c",arr[2]);
    return 0;
}*/

int main(){
    char arr[] = {'h','e','l','l','o','!'};
    int i = 0;
     while(arr[i]!= '!'){
        printf("%c",arr[i]);
        i++;
     }
     return 0;
};

