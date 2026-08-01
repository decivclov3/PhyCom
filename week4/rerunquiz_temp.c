///[Quiz Rerun] Temperature///
#include <stdio.h>
int main()
{
    int celsius;
    scanf("%d", &celsius);

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    printf("%.1lf\n", fahrenheit);
    return 0;
}