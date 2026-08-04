// [Quiz 2025] Sec 3: Major Cineplex //

#include <stdio.h>

int main(){
    int age, day, p;

    scanf("%d%d", &age, &day);

    if (day == 4){
        printf("Ticket price: 100 Baht");
    }else{
        if (age <= 12 && age >= 0){
            p = 120;
        }else if (age >= 13 && age <= 59){
            p = 220;
        }else{
            p = 140;
        }

        if (day == 7 || day == 1) p += 20;

        printf("Ticket price: %d Baht", p);
    }

    return 0;

}