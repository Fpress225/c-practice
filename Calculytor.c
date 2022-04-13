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
        flush_input();
        float vicheslenie;
        if (deistvie == '+' || deistvie == '-' || deistvie == '*' || deistvie == '/') {
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
            for (;;) {
                char prodolchit;
                printf("Продолжить? [Y/n]: ");
                scanf("%c", &prodolchit);
                flush_input();
                if (prodolchit == 'n') {
                    goto end;
                } else if (prodolchit == 'Y' || prodolchit == '\n' || prodolchit == 'y') {
                    break;
                }
            }
        } else {
            printf("Зачем обманываешь?");
        }
    }
    end:
    return 0;
}

void flush_input(void) {
    char c;
    while ((c = getc(stdin)) != '\n' && c != EOF);
}
