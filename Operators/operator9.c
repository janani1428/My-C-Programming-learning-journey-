// check whether a number is divisible by 5 and 11
#include <stdio.h>
int main(){
    int value;
    printf("Enter your number:");
    scanf("%d",&value);

    if(value % 5 == 0 && value % 11 == 0){
        printf(" %d is divisible by both 5 and 11",value);
    }else{
        printf("%d is not divisible by both values",value);
    }
    return 0;
    }
