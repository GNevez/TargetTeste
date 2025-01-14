#include <stdio.h>

int main() {
    double sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
    double total = sp + rj + mg + es + outros;

    double percSP = (sp / total) * 100;
    double percRJ = (rj / total) * 100;
    double percMG = (mg / total) * 100;
    double percES = (es / total) * 100;
    double percOutros = (outros / total) * 100;

    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percSP);
    printf("RJ: %.2f%%\n", percRJ);
    printf("MG: %.2f%%\n", percMG);
    printf("ES: %.2f%%\n", percES);
    printf("Outros: %.2f%%\n", percOutros);

    return 0;
}
