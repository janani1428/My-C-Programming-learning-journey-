//check uppercase or lowercase
#include <stdio.h>
int main(){
    char ch;
    printf("Enter single letter:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("%c is uppercase",ch);
    }else {
        printf("%c is lowercase",ch);
    }
    return 0;
}
    