#include<stdio.h>

    int main(){
    float km, meter,feet, inches, cm;

    printf("enter distance between two citys");
    scanf("%f" ,&km);

    meter = km*1000;
    feet = 3.28*meter;
    inches = 12*feet;
    cm = 100000*km;

    printf("distancr in meter :%f" ,meter);
    printf("distance in feet :%f" ,feet);
    printf("distance in inches :%f" ,inches);
    printf("distance in centimeters :%f" ,cm);


    }
