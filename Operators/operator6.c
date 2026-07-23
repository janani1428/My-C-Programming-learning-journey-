//increment or decrement
#include <stdio.h>
int main(){
    int value;
    printf("enter your value:");
    scanf("%d",&value);

    printf("current value %d\n:",value);

    value++;
    printf("after inclement = %d\n",value);
    value--;
    printf("after decrement = %d\n",value);

    return 0;
}