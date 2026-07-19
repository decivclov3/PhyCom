#include <stdio.h>

int main(){
    double price, p, n, sell;
    scanf("%lf\n%lf\n%lf", &price, &p, &n);
    sell = ( price * ((100-p)/100))* n ;
    printf("%.2lf", sell);

    return 0;
}
