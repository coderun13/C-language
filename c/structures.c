//Structure - user defined data types
//member in structure are processed individually,as separate entities.

#include<stdio.h>
int main(){

    //struct book
    struct book{
        char name[50];
        float price;
        int noOfpage;
    } a,b,c;

    a.price = 400;
    strcpy(a.name,"Seven Twist"); //char[] is array,first copy it in string and then print
    a.noOfpage = 100;

    b.price = 300;
    strcpy(b.name,"First One");
    b.noOfpage = 100;

    printf("%s\n",a.name);
    printf("%f\n",a.price);
    printf("%d\n",a.noOfpage);

    printf("%s\n",b.name);
    printf("%f\n",b.price);
    printf("%d\n",b.noOfpage);


    return 0;
}

//     struct pokemon{ //user defined data type
//     int hp;         
//     int speed;
//     int attack;
//     char tier; 
//     }pikachu,charizard,mewto;

//     //struct pokemon pikachu; //assign value
//     pikachu.attack = 60;
//     pikachu.hp = 50;
//     pikachu.speed = 100;
//     pikachu.tier = 'A';
     
//     printf("%d\n",pikachu.hp);

//     //struct pokemon charizard;  //assign value
//     charizard.attack = 130;
//     charizard.hp = 80;
//     charizard.speed = 80;
//     charizard.tier = 'S';

//     printf("%d\n",charizard.speed);

//    //struct pokemon mewto;  //assign value
//     mewto.attack = 170;
//     //mewto.hp = 150;
//     printf("mewto.hp = ");
//     scanf("%d",&mewto.hp);
//     mewto.speed = 200;
//     mewto.tier = 'F';
    
//     printf("%d",mewto.hp);
//    // printf("%d",mewto.attack);

//     return 0;
// }


/**
 * Array approach vs Structures
 * For same datatype use array 
 * For dissimilar elements use structure
*/

