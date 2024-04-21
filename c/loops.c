/**
 * while loop
*/

#include<stdio.h>

int main()
{
    int i = 0;
    while (i<54)
    {
        printf("%d\n", i);
        i = i+1;
    }

    return 0;
}

/**
 *do while 
*/

#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
}

/**
 * for loop
*/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, j=0;
    for(i=0 ;  ; )
    {
       printf("%d %d\n", i, j);
       i++;j++;
    }
    
    return 0;
}

/**
 * break continue
*/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i, age;
    for (i=0; i<10; i++){
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        // if (age>10)
        // {
        //     break;
        // }
        if (age>10)
        {
            continue;
        }
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("we have not come accross any continue statements");
        printf("snehal aec");
        
    }
    
    return 0;
}


int main()

{

 /**
 * for loop
 */


    /*num from 1-100*/

    for(int i=1;i<=100;i++)

    {

        printf("%d ",i);

    }
    

    /*even num. 1-100*/

    for(int i=1;i<=100;i++)

    {

        if(i%2==0)

        {

        printf("  %d \n",i);

        }

    }

}
