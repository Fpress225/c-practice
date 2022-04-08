#include <stdio.h>

int main() {
    printf("\n");
    float one, two;
    char deistvie;
    printf("Введи первое число(пример 0.0): \n");
    scanf("%f", &one);
    
    printf("Введи действие(+, -, /, *): \n");
    scanf("%c", &deistvie);
    
    printf("Введи второе число(пример 0.0): \n");
    scanf("%f", &two);

    if(deistvie == '+') {
        printf("%f + %f = ", one, two);
    } else if(deistvie == '-') {
        printf("%f - %f", one, two);
    } else if(deistvie == '*') {
        printf("%f * %f", one, two);
    } else if(deistvie == '/') {
        printf("%f / %f", one, two);
    }

    return 0;
}