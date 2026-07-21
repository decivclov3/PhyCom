///[Quiz Rerun] Quiz 02A.02 - Vehicle Specification + Name

#include <stdio.h>
int main(){
    char md[101];
    double power, w, price;
    scanf("%[^\n]%lf%lf%lf", &md, &power, &w, &price);

    printf("%.4lf\n", power);
    printf("%.4lf\n", w);
    printf("%.2lf\n", price);
    printf("%s", md);
}