#include<stdio.h>

int main(){
    int num = 10;
    int* ptr;

    ptr = &num;

    printf("value of num = %d\n", num);
    printf("address of num = %d\n\n", &num);

    printf("address of ptr = %d\n", &ptr);
    printf("value of num = %d\n\n", ptr);
    
    printf("value pointed by ptr = %d\n", *ptr);
    printf("address of *ptr = %d\n\n", &*ptr);

    return 0;
}


/*int main(){
    char character = 's';
    int integer = 1;
    float real = 10.4f;

    printf("value of character = %c\n,address of character = %u\n\n",character, &character);
    printf("value of interger = %d\n,address of integer = %u\n\n",integer, &integer);
    printf("value of real = %f\n,address of real = %u\n",real, &real);

return 0;
}*/