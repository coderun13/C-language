//Structure - user defined data types
//member in structure are processed individually,as separate entities.

#include<stdio.h>
#include<string.h>

int main(){


/**
 * Array of Structure
*/

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
}pokemon;





 return 0;
};

// typedef struct legendpokemon{
//     pokemon normal;
//     char ability[10];
// }legendpokemon;

// legendpokemon mewto;
// strcpy(mewto.ability,"Pressure");
// mewto.normal.attack = 20; //nested structure

// pokemon arr[10];
// arr[0].attack = 50;
// arr[0].hp = 150;
// arr[0].speed = 30;
// arr[0].tier = 'A';


// arr[1].attack = 60;
// arr[1].hp = 200;
// arr[1].speed = 40;
// arr[1].tier = 'B';


// arr[2].attack = 80;
// arr[2].hp = 170;
// arr[2].speed = 20;
// arr[2].tier = 'S';

// for(int i=0;i<3;i++){
//     printf("%d\n",arr[i].attack);
//     printf("%d\n",arr[i].hp);
//     printf("%d\n",arr[i].speed);
//     printf("%d\n",arr[i].tier);

// }


/**
 * Typedef == && the multiple pointer declaration problem (used for renaming)
 * typedef oldtype newtype; (newdatatype will be treated as old datatype)


typedef float realNumber;
    int x;
    realNumber y = 3.1415;
    printf("%f",y);
    return 0;
}*/


//struct person with name,age,salary

// struct Person{
//     char name[50];
//     int salary;
//     int age;
// }first,second;

//     strcpy(first.name,"aryan");
//     first.age = 14;
//     first.salary = 50,000;

//     second.age = 19;
//     strcpy(second.name,"icey");
//     second.salary = 60,000;

//     printf("%s\n",second.name);
//     printf("%d\n",second.age);
//     printf("%d\n",first.age);
//     printf("%s",first.name);

//     return 0;
// }

    //struct book with name,price and pages

//     struct book{
//         char name[50];
//         float price;
//         int noOfpage;
//     } a,b,c;

//     a.price = 400;
//     strcpy(a.name,"Seven Twist"); //char[] is array,first copy it in string and then print
//     a.noOfpage = 100;

//     b.price = 300;
//     strcpy(b.name,"First One");
//     b.noOfpage = 100;

//      b = a; (copying value of a to b(deep copy))(feature of structure)

//     printf("%s\n",a.name);
//     printf("%f\n",a.price);
//     printf("%d\n",a.noOfpage);

//     printf("%s\n",b.name);
//     printf("%f\n",b.price);
//     printf("%d\n",b.noOfpage);

//     return 0;
// }


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


/**
 * Elements are stored in a continuous memory location
*/


/**
 * Features of structures
 * copying value of one to other
 * nesting one structure within another structure
 * A structure variable can be passed to a function(Imp)
*/