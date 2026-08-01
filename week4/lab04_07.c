///Lab 04-07 T-Shirt Sales///
#include <stdio.h>

int main(){
    double price, percent;
    int n;
    scanf("%lf %lf %d", &price, &percent, &n);

    double pro1 = price * n * (1 - percent / 100);
    double pro2 = price * (n - n / 3);

    if (pro1 <= pro2){
        printf("Discount %.0lf%%\n%.2lf\n", percent, pro1);
    }else{
        printf("Buy 2 Get 1\n%.2lf\n", pro2);
    }
    return 0;
}