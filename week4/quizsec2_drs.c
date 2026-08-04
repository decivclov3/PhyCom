// [Quiz 2025] Sec 2: DRS //
#include <stdio.h>

int main() {
    int stutus, n_now, n_safety, fail = 0;
    float gap;

    scanf("%d%f%d%d", &stutus, &gap, &n_now, &n_safety);

    if (stutus != 1) fail++;

    if (n_now <= 2) fail++;

    if (n_now - n_safety < 2) fail++;

    if (gap >= 1) fail++;


    if (fail == 0) {
        printf("DRS allowed\n");
    } else {
        printf("DRS not allowed %d\n", fail);
    }

    return 0;
}