#include <stdio.h>

int main() {
    const char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int monthNumber;
    scanf("%d", &monthNumber);

    if (monthNumber >= 1 && monthNumber <= 12) {
        printf("%s\n", months[monthNumber - 1]);
    }

    return 0;
}