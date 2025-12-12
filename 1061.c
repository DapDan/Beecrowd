#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parteNumerica(char *frase, int ini, int fim) {
    char numStr[10] = {0};
    int j = 0;

    for (int i = ini; i <= fim; i++) {
        if (isdigit(frase[i])) {
            numStr[j++] = frase[i];
        }
    }

    return atoi(numStr);
}

int main() {
    char diaIni[6], diaFim[6];
    char tempoIni[12], tempoFim[12];
    int diaIniNum, diaFimNum;
    int horaIni, minIni, segIni, horaFim, minFim, segFim;
    int resDia, resHora, resMin, resSeg;

    scanf(" %[^\n]", diaIni);
    scanf(" %[^\n]", tempoIni);
    scanf(" %[^\n]", diaFim);
    scanf(" %[^\n]", tempoFim);

    diaIniNum = parteNumerica(diaIni, 0, strlen(diaIni) - 1);
    horaIni = parteNumerica(tempoIni, 0, 2);
    minIni = parteNumerica(tempoIni, 3, 7);
    segIni = parteNumerica(tempoIni, 9, 11);

    diaFimNum = parteNumerica(diaFim, 0, strlen(diaFim) - 1);
    horaFim = parteNumerica(tempoFim, 0, 2);
    minFim = parteNumerica(tempoFim, 3, 7);
    segFim = parteNumerica(tempoFim, 9, 11);

    // printf("Dia inicio: %d\n", diaIniNum);
    // printf("\t%d:%d:%d\n", horaIni, minIni, segIni);
    // printf("Dia fim: %d\n", diaFimNum);
    // printf("\t%d:%d:%d\n", horaFim, minFim, segFim);

    // Calculando a diferença de tempo
    resSeg = segFim - segIni;
    resMin = minFim - minIni;
    resHora = horaFim - horaIni;
    resDia = diaFimNum - diaIniNum;

    if (resSeg < 0) {
        resSeg += 60;
        resMin--;
    }
    if (resMin < 0) {
        resMin += 60;
        resHora--;
    }
    if (resHora < 0) {
        resHora += 24;
        resDia--;
    }

    printf("%d dia(s)\n", resDia);
    printf("%d hora(s)\n", resHora);
    printf("%d minuto(s)\n", resMin);
    printf("%d segundo(s)\n", resSeg);

    return 0;
}