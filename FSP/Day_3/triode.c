/*
Find out all possible 3-digit TRIODE Numbers.
Let x be a TRIODE Number. Then x, 2*x and 3*x will have all distinct digits.
As example:
Let x = 219 be a TRIODE Number, then 2*x = 438 and 3*x = 657 have all distinct digits.
Let x = 192 be a TRIODE Number, then 2*x = 384 and 3*x = 576 have all distinct digits.
i.e. 219, 438, 657
i.e. 192, 384, 576
Develop the whole code. There is no need to take any inputs from the user.
Generate all possible 3-digit TRIODE Numbers only as your program output.
excalidraw.com

Algorithm:
for x = 102 to 987
    intialize trace[10] with all 0s
    for i = 1 to 3
    	number = i * x
    	while (number <> 0)
    		last_digit = number mod 10
    		if trace[last_digit] <> 0 then exit loop
    		trace[last_digit] = 1
    		number = integer(number / 10)
    	end while
    end for
    if All OK then print x, 2*x, 3*x
end for
end

  x => 3 (102 to 498)
2*x => 3    4
3*x => 3,4  4
*/

// solution 1
#include <stdio.h>
int main(void) {
	int trace[10],times,i,x,number,last_digit;
	printf("\n\nChecking with all TRIODE Numbers...\n"); 
	for (x=102; x<=498; x++) { //range
    	for (i=0; i<10; i++) trace[i] = 0; //tracing
        for (times=1; times<=3; times++) { // 3 numbers
    		number = times * x;
    		while (number != 0) { 
    			last_digit = number % 10;
    			if (trace[last_digit] != 0) break;
    			trace[last_digit] = 1;
    			number = (int)(number / 10);
    		}
    		if (number != 0) break;
    	}
    	if (number == 0) printf("\n%d, %d and %d...", x, 2*x, 3*x);
	}
	printf("\n\nEnd of the program...");
}


// solution 2

/*
int main(){
int a[10],num,x,i,flag,d;

for (x=102;x<=498;x++){
  
  for(i=0;i<10;i++)
  a[i]=0;
  
  flag=1;
  
  for(i=1;i<=3 && flag==1;i++){
    num=i*x;
    
    while(num!=0 && flag==1){
      d=num%10;
      
      if(a[d]==0)
      a[d]=1;
      else
          flag=0;
          
          num=num/10;
          
    }
  }
  if(flag==1)
      printf("\nTriode number x = %d, and 2*x = %d &3*x = %d...",x,2*x,3*x);
}
  printf("\n\nEnd of the program...");
}
*/