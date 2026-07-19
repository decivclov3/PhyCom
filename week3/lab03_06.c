#include <stdio.h>
#include <math.h>

int main(){
    double price, c, h, v;
    scanf("%lf\n%lf\n%lf", &price, &c, &h);
    v = 3.14159265359 * pow((c/2), 2) * h;
    printf("Volume : %.2lfml\n", v);
    printf("Baht/ml : %.4lf", (price/v));

    return 0;
}
