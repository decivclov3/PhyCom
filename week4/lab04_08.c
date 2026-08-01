///Lab 04-08 Valid Triangle///
#include <stdio.h>

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a){
        printf("Triangle is valid.\n");
    }else{
        printf("Triangle is not valid.\n");
    }    

    return 0;
}