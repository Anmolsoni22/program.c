#include<stdio.h>

    int main(){
    float tsp, tp, tcp, costpriceoneitem;

    printf("enter total selling price of 15 item");
    scanf("%f",&tsp);

    printf("enter total cost profit");
    scanf("%f",&tcp);

    tcp = tsp - tp;
    costpriceoneitem = tcp / 15.0;

    printf("cost price of one item :%f" ,costpriceoneitem);

    }
