#include<stdio.h>
int power(int b,int e){
    if (e==0){
        return 1;
    }

    return b*power(b,e-1);

}

int main(){
    int b,e;
    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter e:");
    scanf("%d",&e);

    printf("Power:%d",power(b,e));
}