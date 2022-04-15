#include <stdio.h>

void flush_input(void);
int should_program_continue(void);

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
        flush_input();
        float vicheslenie;
        switch (deistvie) {
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
        if (!should_program_continue()) {
            goto end;
        }
    }
    end:
    return 0;
}

int should_program_continue() {
    for (;;) {
        char should_continue;
        printf("Продолжить? [Y/n]: ");
        scanf("%c", &should_continue);
        if (should_continue != '\n') {
            flush_input();
        }
        if (should_continue == 'n') {
            return 0;
        } else if (should_continue == '\n' || should_continue == 'Y' 
            || should_continue == 'y') {
            break;
        }
    }
    return 1;
}

void flush_input(void) {
    char c;
    while ((c = getc(stdin)) != '\n' && c != EOF);
}
