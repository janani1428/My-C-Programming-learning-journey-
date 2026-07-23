// find the absolute value
#include<stdio.h>
int main(){
    int value,result;
    printf("Enter the value:");
    scanf("%d",&value);

    if (value < 0)
    {
        printf("Absolute value = %d",-value);
    }else{
        printf("Absolute value =%d",value);
    }
    return 0;
}