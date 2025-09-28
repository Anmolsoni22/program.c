
#include<stdio.h>

    int main(){
    float sub1, sub2, sub3, sub4, sub5;
    float aggregate, percentage;

    printf("enter marks obtained by a student");
    scanf("%f%f%f%f%f" ,&sub1,&sub2,&sub3,&sub4,&sub5);

    aggregate = sub1+sub2+sub3+sub4+sub5;
    percentage = (aggregate / 500.0)*100;

    printf("aggregate marks and percentage :%f%f" ,aggregate,percentage);

    }
