#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c, volCube;

    a = b = c = 1;
    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0)
            break;

        volCube = (int) cbrt(a * b * c);
        printf("%d\n", volCube);
    }

    return 0;
}
