#include <stdio.h>

int main() {
    int age, count;
    float total;

    total = 0, count = 0;
    while(1) {
        scanf("%d", &age);

        if(age < 0)
            break;
        else {
            total += age;
            count++;
        }
    }

    total /= count;
    printf("%.2f\n", total);

    return 0;
}