//check even or odd
#include <stdio.h>
int main(){
    int value;
    printf("Enter your value :");
    scanf("%d",&value);

    if(value % 2 == 0)
    {
        printf("%d is even number", value);
    } else {
        printf("%d is odd number",value);
    }
    return 0;
}