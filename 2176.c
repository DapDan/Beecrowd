#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, count;
    char *s = (char *)malloc(102 * sizeof(char));

    scanf("%s", s);

    count = 0;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == '1')
            count++;
    }

    if(count % 2 == 0)
        strcat(s, "0");
    else
        strcat(s, "1");

    printf("%s\n", s);

    free(s);

    return 0;
}
