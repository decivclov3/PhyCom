///Lab 04-02 Find Number///

#include <stdio.h>
int main(){
    double x, y, z, median;
    scanf("%lf %lf %lf", &x, &y,&z);

    if ((x >= y && x <= z) || (x <= y && x >= z)){
        median = x;
    } else if ((y >= x && y <= z) || (y <= x && y >= z)){
        median = y;
    } else{
        median = z;
    }

    printf("%.2lf\n", median);

    return 0;
}