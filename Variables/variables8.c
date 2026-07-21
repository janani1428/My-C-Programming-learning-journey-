//reverse numbers 3 digit
#include <stdio.h>
int main(){
    int numbers,digit1,digit2,digit3,reverse;

    printf("enter three numbers:");
    scanf("%d%d%d", &numbers);

    digit1 = numbers / 100;
    digit2 = (numbers/10)%10;
    digit3 = numbers % 10;

    reverse = (digit3 * 100) + (digit2 * 10) + digit1;

    printf("reversed number = %d\n",reverse);
    return 0;
    

}