#include <stdio.h>

int main(void) {
    for (int w = 0; w < 100; w++) {
        printf("Привет чел. Это магия. Возьми калькулятор на всякий пожарный.\n");
        printf("Теперь задумай любое число. И умнож его на 6\n");
        printf("Подели его на 2\n");
        printf("Введи полученное число: ");
        int y, t, x;
        char c;
        int scan_result = scanf("%d%c", &x, &c); // integer + \n
        // 228.13 + \n 

        int not_an_int_is_scanned = scan_result == 2 && c == '\n';

        if (scan_result == 2 && c == '\n') { // gde zakryvayetsya?
            y = x * 2;
            t = y / 6; // teper. Visish li... dazhe ne znayu, s chego nachatt...

            if (t != 0 ) {
                printf("Теперь мэджик я угадаю твое числ.\n");
                printf("Твое число: %d\n", t );
                printf("Для закрытия введи 1:");
            }
            // davay dlya prostoty ne budesh pisatt usloviya bez {}
        } else if ( x == 0) {
            printf("Ты еблан? Я сказал задумай ЛЮБОЕ ЧИСЛО КРОМЕ НУЛЯЯЯЯ И ЕСТЕСТВЕННО КРОМЕ БУКВ!!!!!!!!!!!!!!!\n");
        } else {
            printf("Стопэ... Ты меня решил обмануть? Пошел ты нахуй и иди в начало) Вот лашок)\n");
        }
    }
    return 0;
}