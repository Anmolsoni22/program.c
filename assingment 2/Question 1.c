#include<stdio.h>

    int main(){

    float centigrae, fahrenheit;

    printf("enter temperature centigrade");
    scanf("%f" ,&centigrae);

    fahrenheit = (9*centigrae)/5+32;

    printf("temperature in fahrenheit :%f" ,fahrenheit);

    }
