#include <stdio.h>

int main() {
    int horaIni, minIni, horaFim, minFim;
    int resHora, resMin, difHora, difMin;
    scanf("%d %d %d %d", &horaIni, &minIni, &horaFim, &minFim);

    if(horaIni == horaFim && minIni == minFim) {
        resHora = 24;
        resMin = 0;
    }else {
        difHora = horaFim - horaIni;
        difMin = minFim - minIni;
        if(difHora < 0)
            resHora = 24 + (horaFim - horaIni);
        else
            resHora = difHora;

        if(difMin < 0) {
            resMin = 60 + (minFim - minIni);
            resHora--;

            if(resHora < 0) {
                resHora = 24 + resHora;
            }
        }else
            resMin = difMin;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", resHora, resMin);

    return 0;
}
