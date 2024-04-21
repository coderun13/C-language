#include <stdio.h>
int main( ) { 
int num ;
printf ( "Enter a number less than 10 " ); 
scanf ( "%d", &num );
 if ( num <= 10 ){  
printf ( "Number is less than 10");}
else{
printf("Number is greater than 10");
}
return 0; 
}

main( ) { 
int   a;
printf ( "Enter either 0 or 1 " ) ; 
scanf ( "%d", &a ) ;
 if ( a == 1 ){ 
 printf ( "Number 1 is entered!" ) ;  }
else  { 
if ( a == 0 ){   
printf ( "Number 0 is entered" ) ;}  
else {  
printf ( "Wrong Input" ) ;  }
}
return 0;
}




#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age>=18) {
        printf("You can vote!");
    }

    else if(age>=10)
    {
        printf("You are between 10 to 18 and you can vote for kids");
    }
    
    else if(age>=3)
    {
        printf("You are between 3 to 10 and you can vote for babies");
    }

    else{
        printf("You cannot vote!");
    }
    

    return 0;
}


// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them

int main()

{

int e;

    printf("enter a number ");

    scanf("%d",&e);

    if (e%5==0)

    {

        printf("the number is divided by 5\n");

    }else{

        printf("the number is not divided by 5\n");

    }
} 