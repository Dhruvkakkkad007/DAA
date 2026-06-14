#include<stdio.h>
int c(int n,int count){
    if(n==0){
        return count;
    }
    count++;
    return c(n/10,count);
}


int main(){
    int n,count=0;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Sum of number 1 to n is = %d",c(n,count));
}