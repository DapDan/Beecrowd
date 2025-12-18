#include <math.h>
#include <stdio.h>

int main() {
    int d, vf, vg;
    float tempoF, tempoG;

    while(scanf("%d %d %d", &d, &vf, &vg) == 3) {
        tempoF = 12.0 / vf;
        tempoG = sqrt((d * d) + 144.0) / vg;

        if(tempoG <= tempoF)
            printf("S\n");
        else
            printf("N\n");
    }

    return 0;
}
