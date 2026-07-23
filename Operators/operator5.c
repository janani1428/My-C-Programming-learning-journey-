//find the largest of three numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three value:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c){
        printf("a is largest value",a);
    }else if (b>=a && b>=c){
        printf("c is largest value:",b);
    }else{
        printf("c is largest value");
    }
    return 0;

}