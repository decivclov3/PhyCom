#include <stdio.h>
#include <math.h>

int main() {
    double t, d, h, m, s;
    scanf("%lf", &t);
    d = floor(t / 86400);
    h = floor(fmod(t, 86400) / 3600);
    m = floor(fmod(t, 3600) / 60);
    s = fmod(t, 60);
    printf("%.lf s = %.lf d %.lf h %.lf m %.lf s",
           t, d, h, m, s);

    return 0;
}