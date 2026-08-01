// Lab 05-09 : Reg System //

#include <stdio.h>

int main() {
    int age, h, w;
    int sumAge = 0, sumHeight = 0, sumWeight = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    for (int i = 1 ; i <= 50 ; i++) {
        scanf("%d %d %d", &age, &h, &w);

        sumAge += age;
        sumHeight += h;
        sumWeight += w;

        // 1. อายุ >= 20 และ ส่วนสูง >= 160
        if (age >= 20 && h >= 160) {
            c1++;
        }

        // 2. อายุ < 20 และ (ส่วนสูง <= 180 หรือ น้ำหนัก >= 60)
        if (age < 20 && (h <= 180 || w >= 60)) {
            c2++;
        }

        // 3. อายุ >= 30 และ น้ำหนักอยู่ในช่วง 40-80
        if (age >= 30 && w >= 40 && w <= 80) {
            c3++;
        }

        // 4. อายุ < 40 และ (น้ำหนัก < 85 หรือ ส่วนสูง <= 200)
        if (age < 40 && (w < 85 || h <= 200)) {
            c4++;
        }
    }

    printf("Age >= 20 and Height >= 160: %d\n", c1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", c2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", c3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", c4);
    printf("Average Age: %d\n", sumAge / 50);
    printf("Average Height: %.2f\n", (float)sumHeight / 50);
    printf("Average Weight: %.2f\n", (float)sumWeight / 50);

    return 0;
}