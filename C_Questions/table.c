
#include<stdio.h>

int main()

{
    
/*table of 2*/

    int n;

  printf("which table you want to print: ");

  scanf("%d",&n);

     for(int i=1;i<=10;i++)

    {

        printf(" %d*%d=%d\n",n,i,n*i);

    }

}