#include <stdio.h>

int pertenceFibonacci(int n) {
    int a = 0, b = 1, temp;
    if (n == 0 || n == 1) return 1;
    while (b <= n) {
        if (b == n) return 1;
        temp = a + b;
        a = b;
        b = temp;
    }
    return 0;
}

int main() {
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    if (pertenceFibonacci(num)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d NAO pertence a sequencia de Fibonacci.\n", num);
    }

    return 0;
}
