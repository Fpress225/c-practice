#include <stdio.h>

int main(void) {
    printf("Привет чел. Это магия. Возьми калькулятор на всякий пожарный.\n");
    printf("Теперь задумай любое число. И умнож его на 6\n");
    printf("Подели его на 2\n");
    printf("Введи полученное число: ");
    int x;
    char c;
    int scan_result = scanf("%d%c", &x, &c); 

    int not_an_int_is_scanned = scan_result == 2 && c == '\n';
    int mod = x % 3;

    if (mod != 0) {
        printf("Ты хотел меня обмануть? Неее я все прошел, я эту программу по 100 раз обновлял))) Иди ка ты куда подальше\n");
        return 1;
    }
    if (scan_result == 2 && c == '\n') { 
        int y = x / 3;
        if (y != 0) {
            printf("Теперь мэджик я угадаю твое число.\n");
            printf("Твое число: %d\n", y);
        }
    } else if (x == 0) {
        printf("Ты еблан? Я сказал задумай ЛЮБОЕ ЧИСЛО КРОМЕ НУЛЯЯЯЯ И ЕСТЕСТВЕННО КРОМЕ БУКВ!!!!!!!!!!!!!!!\n"); 
    } else {
        printf("Стопэ... Ты меня решил обмануть? Пошел ты нахуй и иди в начало) Вот лашок)\n");
    }
    return 0;
}
