#include<stdio.h>
int main()

/**
 * Array -> Collection
 * Index -> start from 0
 * Garbage value -> if value is not entered then a garbage value is stored
 * Passing array to functions -> It is passed by refernce
*/


//difference between the sum of all even and odd indices elements
// {
// int oddsum, evensum, diff;
//     int arr[7] = {1,2,3,4,5,6,7};
//      evensum = 0;
//      oddsum = 0;
//     for(int i=0;i<=6;i++){
//         if(i % 2 == 0){
//             evensum += arr[i];// 1+3+5+7 = 16
//     } else {
//         oddsum += arr[i];// 2+4+6 = 12 
//     }
//     }
//     printf("%d",evensum - oddsum);// 16-12 = 4
// }


//print numbers greater than x(given input from the user)
// {
//     int x;
//     int arr[7] = {1,2,3,4,5,6,7};
//     printf("enter the number x %d - ",x);
//     scanf("%d",&x);
//      for(int i=0;i<=6;i++){
//         if(arr[i]>x){
//             printf("%d ",arr[i]);
//         }
//      }
// }


//multiply odd index number by 2 and add 10 to even index number
// {
//     int arr[7] = {1,2,3,4,5,6,7};
//     for(int i=0;i<=6;i++){
//         if(i%2!=0) arr[i]*=2;
//         else arr[i]+=10;
//         }
//         for(int i=0;i<=6;i++){
//         printf("%d ",arr[i]);
//     }
// }


// (if marks less than 35 print the index)
// {
//    int marks[5]= {134,45,34,32,21,89};
//    for(int i=0; i<5;i++){
//    if(marks[i]<35){
//       printf("%d ",i);
//    }
// }
// }


//(taking input and printing output by loop)
// {
//    int arr[5];

// for(int i=0;i<=4;i++){
//    int a = i+1;
//    printf("\n enter element number%d - ",i);
//    scanf("%d",&arr[i]);
// }
// for(int i=0;i<5;i++){
//  printf("%d ",arr[i]); 
// }
// }


//sumof all elements in array
// {
//    int arr[5];
//    for(int i = 0;i<=4;i++){
//       printf("enter the element %d ",i);
//       scanf("%d",&arr[i]);
//    }
//     for(int i = 0; i<=4; i++){
//       printf("%d \n",arr[i]);
//     }
//    int sum = 0;
//    for(int i = 0; i<=4; i++){
//       sum = sum + arr[i];
//    }
//    printf("sum is %d ",sum);
// }


//product of all elements in the array
// {
//    int arr[5];
//    for(int i = 0;i<=4;i++){
//       printf("enter the element %d ",i);
//       scanf("%d",&arr[i]);
//    }
//     for(int i = 0; i<=4; i++){
//       printf("%d \n",arr[i]);
//     }
//    int sum = 1;
//    for(int i = 0; i<=4; i++){
//       sum = sum * arr[i];
//    }
//    printf("sum is %d ",sum);
// }



//(print by index)
// {
//    int arr[4] = {2,3,4,5};
//    printf("%d",arr[3]); //
// }

//maximum value out of all elements in a array
// {
//    int arr[5];
//    for(int i = 0;i<=4;i++){
//       printf("enter the element %d ",i);
//       scanf("%d",&arr[i]);
//    }
//    int max = arr[0]; //comparison by first element
//    for(int i = 0; i<=4; i++){
//       if(max<arr[i]){
//       max = arr[i];
//       }
//    }
//    printf("max element is %d ",max);
// }


//(assigning value and printing)
// {
//     int arr[5]= {2,4,6,8,1};
//     arr[4]= 100;
//     arr[1]= 1;
//     printf("%d",arr[1]); //(assigning value)
//     return 0;

// }


//(taking input and printing output)
// {
//     int arr1[4];
//     printf("enter first number: ");
//     scanf("%d",&arr1[0]);
//      printf("enter second number: ");
//     scanf("%d",&arr1[1]);
//      printf("enter third number: ");
//     scanf("%d",&arr1[2]);
//      printf("enter fourth number: ");
//     scanf("%d",&arr1[3]);

//     printf("%d",arr1[3]);
// }


//(printing by loop)
// {
//      int arr[5]= {2,4,6,8,1}; 

//      for(int i = 0;i<=4;i++){
//         printf(" %d",arr[i]); 
//      }
// }


//Pair whose sum is equal to a given number
// {
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int totalPairs = 0;
//     int x = 3 ;
//     // printf("enter the number %d ",x);
//     // scanf("%d",&x);
//     for(int i=0; i<=7; i++){
//         for(int j=i+1; j<=7; j++){
//             if(arr[i]+ arr[j]== x){
//                 totalPairs++;
//                 printf("{%d,%d}\n",arr[i],arr[j]);
//             }
//         }
//     }
//     printf("%d",totalPairs);
// }


//Triplet whose sum is equal to a given number
// {
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int totaltriplet = 0;
//     int x = 12 ;
//     // printf("enter the number %d ",x);
//     // scanf("%d",&x);
//     for(int i=0; i<=7; i++){
//         for(int j=i+1; j<=7; j++){
//              for(int k=j+1; k<=7; k++){
//             if(arr[i]+ arr[j]+arr[k] == x){
//                 totaltriplet++;
//                 printf("{%d,%d,%d}\n",arr[i],arr[j],arr[k]);
//                 }
//             }
//          }
//     }
//     printf("%d",totaltriplet);
// }


//second largest element in the given array
// {
//    int arr[5];
//    for(int i = 0;i<=4;i++){
//       printf("enter the element %d ",i);
//       scanf("%d",&arr[i]);
//    }
//    int max = arr[0]; //comparison by first element
//    int smax = arr[0];
//    for(int i = 0; i<=4; i++){
//       if(max<arr[i]){
//       max = arr[i];
//       }
//    }
//    for(int i = 0; i<=4; i++){
//       if(arr[i]!= max && smax < arr[i]){
//       smax = arr[i];
//       }
//    }
//    printf("second max element is %d ",smax);
// }

//another way to do the same code above
// {
// int arr[5];
//    for(int i = 0;i<=4;i++){
//       printf("enter the element %d ",i);
//       scanf("%d",&arr[i]);
//    }
//    int max = arr[0]; //comparison by first element
//    int smax = arr[0];
//    for(int i = 0; i<=4; i++){
//       if(max<arr[i]){
//       smax = max;
//       max = arr[i];
//       }
//       else if(smax<arr[i] && max!=arr[i]){
//            smax= arr[i];
//        }
//    }
//    printf("%d",smax);
// }


{
   int arr[7] = {1,2,3,4,5,6,7};
   int brr[7];
   for(int i = 6; i<=1 ;i--){
      brr[i] = arr[i];
   }
 printf("%d", brr[i]);
}


