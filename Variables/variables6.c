// convert total seconds into hours,minutes and seconds
#include <stdio.h>
int main(){
    int Hours,minutes,seconds,totalseconds;
    printf("enter total seconds:");
    scanf("%d",&totalseconds);

    Hours = totalseconds /3600;
    minutes = (totalseconds % 3600)/60;
    seconds = totalseconds % 60;

    printf("hours = %d\n",Hours);
    printf("minutes = %d\n",minutes);
    printf("seconds = %d\n",seconds);
    return 0;
}