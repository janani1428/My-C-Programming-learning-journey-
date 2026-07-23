// find the smallest of three numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three values:");
    scanf("%d%d%d",&a,&b,&c);

    if(a<=b && a<=c){
        printf("a is smallest value",a);
    }else if(b<=a && b<=c){
        printf("b is smallest value",b);
    }else{
        printf("c is smallest value",c);
    }
    return 0;
}

