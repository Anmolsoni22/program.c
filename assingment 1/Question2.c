#include<stdio.h>

    int main(){
    float basic, da, hra, gross;

    printf("enter ramesh basic sallery");
    scanf("%f" ,&basic);

    da = 40.0/100*basic;
    hra = 20.0/100*basic;
    gross = basic+hra+da;

    printf("dearness allowance :%f" ,da);
    printf(" house rent allowance :%f" ,hra);
    printf("gross salley :%f" ,gross);

    }
