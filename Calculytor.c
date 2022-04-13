#include <stdio.h>

void flush_input(void);

int main() {
    for(;;) {
        printf("\n");
        float one, two;
        char deistvie;
        printf("Введи первое число(пример 0.0): ");
        scanf("%f", &one);
        flush_input();

        printf("Введи второе число(пример 0.0): ");
        scanf("%f", &two);
        flush_input();

        printf("Введи действие(+, -, /, *): ");
        scanf("%c", &deistvie);

        float vicheslenie;
        switch(deistvie) {
            case '+':
                vicheslenie = one + two;
                printf("%.3f + %.3f = %.3f\n", one, two, vicheslenie);
                break;
            case '-':
                vicheslenie = one - two;
                printf("%.3f - %.3f = %.3f\n", one, two, vicheslenie);
                break;
            case '*':
                vicheslenie = one * two;
                printf("%.3f * %.3f = %.3f\n", one, two, vicheslenie);
                break;
            case '/':
                vicheslenie = one / two;
                printf("%.3f / %.3f = %.3f\n", one, two, vicheslenie);
                break;
        }
    }
    return 0;
}

void flush_input(void) {
    char c;
    while ((c = getc(stdin)) != '\n' && c != EOF);
}
