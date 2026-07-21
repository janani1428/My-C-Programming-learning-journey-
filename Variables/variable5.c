// convert celsious to fahrenheit and fahrenheit to celsious
#include <stdio.h>
int main(){
    float celsious , fahrenheit;

    printf("enter temperature in celcious:");
    scanf("%f",&celsious);

    fahrenheit = (celsious * 9/5)+ 32;

    printf("temperature in fahrenheit = %.2f\n",fahrenheit);
    return 0;
}