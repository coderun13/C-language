# include<stdio.h>
# include<string.h>

void sort(char str[],int n){
    int i,j;
    for(i =0; i<n; i++){
        for(j=0;j<n-i-1;j++){
            if( str[j] > str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
}

int main(){
    char name[] = "shivam";
    int len = strlen(name);

    sort(name,len);
    printf("Sorted name: %s\n",name);

    return 0;
}