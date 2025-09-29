#include<stdio.h>

    int main(){
     int totalminute, hour, minute;

     printf("enter total minute");
     scanf("%d" ,&totalminute);

     hour = totalminute /60;
     minute = totalminute %60;

     printf("hour%d minute%d" ,hour, minute);

    }
