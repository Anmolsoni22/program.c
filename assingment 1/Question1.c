#include<stdio.h>

    int main(){
    float perimeter, radius, area;
    float pi = 3.14;

    printf("enter the radius of the circel");
    scanf("%f", &radius);

    perimeter = 2*pi*radius;
    area = pi*radius*radius;

    printf("perimeter of circel : %f" ,perimeter);
    printf("area of circel : %f" ,area);


    }
