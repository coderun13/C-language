#include <stdio.h>
int main(void){
    char *str = "university";
    int i;

    printf("\n The string is %s...",str);
    for(i=0;i<=10;i++){
        printf("\ncharacter at the %dth placd is %c...",i,str[i]);
    }

    printf("\n The string is %s...",str);
    printf("\n\nEnd of program...");
}
