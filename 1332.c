#include <stdio.h>
#include <string.h>

int main() {
    int n, i;
    char number[6];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s", number);

        if(strlen(number) == 5)
            printf("3\n");
        else {
            if((number[0] == 'o' && number[1] == 'n') || (number[0] == 'o' && number[2] == 'e') || (number[1] == 'n' && number[2] == 'e')) {
                printf("1\n");
            }else {
                printf("2\n");
            }
        }
    }

    return 0;
}
