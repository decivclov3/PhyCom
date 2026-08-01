// 	Lab 05-10 IT Business//

#include <stdio.h>

int main(){
    float bank, cash, amount;
    int err = 0;
    char status = '-';
    scanf(" %f %f", &bank, &cash);

    while (err != 3)
    {
        scanf(" %c %f", &status, &amount);
        if (status == 'E'){
            break;
        }

        if (status == 'D'){
            if (cash >= amount){
                bank += amount;
                cash -= amount;
                err = 0;
            } else {
                err++;
            }
        } else if (status == 'W'){
            if (bank >= amount){
                bank -= amount;
                cash += amount;
                err = 0;
            } else {
                err++;
            }
        }
    }

    printf("%.2f\n%.2f", bank, cash);

    return 0;
}