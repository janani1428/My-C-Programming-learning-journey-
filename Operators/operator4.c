//find the largest of two numbers
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two values:");
    scanf("%d%d",&a ,&b);

    if(a>b){
        printf("a is largest value",a);

    }else{
        printf("b is largest number");
    }
    return 0;
}