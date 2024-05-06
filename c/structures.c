//Structure - user defined data types
#include<stdio.h>
int main(){
    struct pokemon{ //user defined data type
    int hp;         
    int speed;
    int attack;
    char tier; 
    };
    struct pokemon pikachu; //assign value
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';
     
    printf("%d\n",pikachu.hp);

    struct pokemon charizard;  //assign value
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    printf("%d\n",charizard.speed);

    struct pokemon mewto;  //assign value
    mewto.attack = 170;
    //mewto.hp = 150;
    printf("mewto.hp = ");
    scanf("%d",&mewto.hp);
    mewto.speed = 200;
    mewto.tier = 'F';
    
    printf("%d",mewto.hp);
   // printf("%d",mewto.attack);

    return 0;
}



