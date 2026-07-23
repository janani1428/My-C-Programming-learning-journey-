// check positive ,negative or zero
#include <stdio.h>
int main (){
    int value;

    printf("enter your value :");
    scanf("%d",&value);

    if(value > 0){
        printf("the value is positive",value);
    }else if (value < 0){
        printf("the value is negative",value);
    }else{
        printf("the value is zero");
    }
    return 0;
}