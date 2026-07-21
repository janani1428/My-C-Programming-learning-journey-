//swap two numbers ising a third variables
#include <stdio.h>
int main(){
    int a , b, temp;

    printf("enter two numbers:");
    scanf("%d%d", &a,&b);

    temp =a;
    a = b;
    b = temp;

    printf("after swap :\n");
    printf("a = %d\n",a);
    printf("a = %d\n",b);
    return 0;
}