#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%99s", string);

    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}
