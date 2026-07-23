//swap two numbers using XOR
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("after swaping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
    
}