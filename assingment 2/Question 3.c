#include<stdio.h>

    int main(){
    float hour, minute, totalminute;

    printf("enter hour");
    scanf("%f" ,&hour);

    printf("enter minute");
    scanf("%f" ,&minute);

    totalminute = (hour*60) + minute;

    printf("totalhourminute :%f" ,totalminute);

    }
