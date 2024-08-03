/*
n = 6  (User i/p)    i    .    *
                  ----------------
.....*               1    5    1        (n, i)
....***              2    4    3   . => (n - i)
...*****             3    3    5
..*******            4    2    7   * => (2 * i - 1)
.*********           5    1    9
***********          6    0   11
                  ----------------
                   Tracing Table
*/


#include<stdio.h>
int main(void){
    int i,j,n;
    printf("\n Please enter the number of layers: ");
    scanf("%d",&n);
    for(i =1; i <=n; i++){
        for(j=1; j <= (n-i); j++) printf(".");
        for(j-1; j<=(2*i-1); j++) printf("*");
        printf("\n");
}
printf("\n\n end of the program...");
}

/*
n = 6  (User i/p)    i    .    *
                  ----------------
***********          1    0   11        (n, i)
.*********           2    1    9   . => (???)
..*******            3    2    7
...*****             4    3    5   * => (???)
....***              5    4    3
.....*               6    5    1
                  ----------------
                   Tracing Table
*/


#include <stdio.h>
int main(void) {
	int i,j,n;
	printf("\nPlease enter the number of layers: \n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i-1; j++) printf(".");
		for (j = 1; j <= (2 * (n - i) + 1); j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}


