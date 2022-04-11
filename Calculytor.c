#include <stdio.h>

void info(void);

int main() {
    printf("\n");
    float one, two;
    char deistvie;
    printf("Введи первое число(пример 0.0): ");
    scanf("%f", &one);
    info();

    printf("Введи второе число(пример 0.0): ");
    scanf("%f", &two);
    info();

    printf("Введи действие(+, -, /, *): ");
    scanf("%c", &deistvie);

    float vicheslenie;
    if (deistvie == '+') {
        vicheslenie = one + two;
        printf("%f + %f = %f\n", one, two, vicheslenie);
    } else if (deistvie == '-') {
        vicheslenie = one - two;
        printf("%f - %f = %f\n", one, two, vicheslenie);
    } else if(deistvie == '*') {
        vicheslenie = one * two;
        printf ("%f * %f = %f\n", one, two, vicheslenie);
    } else if(deistvie == '/') {
        vicheslenie = one / two;
        printf ("%f / %f = %f\n", one, two, vicheslenie);
    }

    return 0;
}

void info() {
    char c;
    while ((c = getc(stdin)) != '\n' && c != EOF);
}