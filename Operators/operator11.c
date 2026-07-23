// check whether a charactor or consonant
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a charactor:");
    scanf("%c",&ch);

    if(ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("%c is vowel",ch);

    }else if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z'){
    printf("%c is consonant",ch);
    }else {
        printf("invalid value");
    }
    return 0;

}
