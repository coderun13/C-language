#include <stdio.h>
#include<stdlib.h>

/*preprocessor
 * #include ---> preprocessor directive 
 * int - 4 bytes (4*8 = 32 bits)
 * long - 8 bytes
*/

/* Macros and Macro function
 * #define PI 3.1415925359 (macros)
 * #define Area(r)(PI*r*r) (macro)
*/

/**
 * stack section ------
 *      |              |   Dynamic 
 * Free memory         |   memory 
 *      |              |   Allocation
 * Heap section -------
 * Data section -------   Static
                       |  memory
 * Text Section -------   Allocation
*/

/* Static - the memory is allocated at the compile time.
 * Dynamic - the memory allocated at the run time.
*/


//malloc() and calloc()
/*int main(){
    int* ptr = (int*)malloc(10*4);//garbage value(14686376)
    ptr++;
    printf("%d",*ptr);

    int* ptr = (int*)calloc(10,4); //0- garbage value
    ptr++;
    printf("%d",*ptr);   
}*/


// free()
/*int main(){
    // int x= 9;
    // int* ptr = NULL;
    // printf("%p",ptr);

    int* ptr = (int*) calloc(10,4);
    int* p = ptr; //starting reserved hai
    ptr++;
    free(p);
}*/


//realloc(pointer,new-size)
int main(){
    int* ptr = (int*) malloc(10*4);
    printf("%p\n",ptr);
    ptr = realloc(ptr,20*4);
    printf("%p",ptr);
}


