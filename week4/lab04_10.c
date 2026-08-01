///Lab 04-10 Mitsubishi GPS III Elevator///
#include <stdio.h>
#include <math.h>

double level_height(int n){
    if (n == 1){
        return 0.0;
    }
    return 4.0 * n - 2.0;
}

int main(){
    int start, end;
    scanf("%d %d", &start, &end);

    double a = 0.5, v = 1.5;
    double s = fabs(level_height(end) - level_height(start));

    double t = 2 * (v / a) + (s - v * v / a) / v;

    printf("%.2lf\n", t);

    return 0;
}