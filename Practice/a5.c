#include <stdio.h>
void main()
{
    int n,found = 0;
    
    printf("Enter a Num:");
    scanf("%d", &n);

    for (int start = 1; start < n; start++)//Outer loop → chooses starting number.
    {
        int sum = 0;

        for (int i = start; i < n; i++)  //Inner loop → calculates the sum of consecutive numbers
                                        
        {
            sum+=i;

            if(sum==n){
                found = 1;
                break;
            }
            if(sum > n){
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(found){
        printf("True");
    }
    else{
        printf("False");
    }
}