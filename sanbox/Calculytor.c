#include <stdio.h>

int main() {
    printf("\n");
    float one, two;
    char deistvie;
    printf("Введи первое число(пример 0.0): ");
    scanf("%f", &one);
        
    printf("Введи второе число(пример 0.0):");
    scanf("%f", &two);
    
    printf("Введи действие(+, -, /, *): ");
    scanf("%c", &deistvie);


    if (deistvie == '+') {
        printf("%f + %f = ", one, two);
    } else if (deistvie == '-') {
        printf("%f - %f", one, two);
    } else if(deistvie == '*') {
        printf ("%f * %f", one, two);
    } else if(deistvie == '/') {
        printf ("%f / %f", one, two);
    }

    return 0;
}