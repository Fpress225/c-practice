#include <stdio.h>
int main(void) {
    printf("Привет чел. Это магия. Возьми калькулятор на всякий пожарный.\n");
    printf("Теперь задумай любое число. И умнож его на 6\n");
    printf("Подели его на 2\n");
    printf("Введи полученное число:\n");
    int y, t, x;
    scanf("%s", &x);
    y = x * 2;
    t = y / 6;
    if(t != 0 ){
        printf("Теперь мэджик я угадаю твое числ.\n");
        printf("Твое число: %d\n", t );
    }
    else if ( x == 0){
        printf("Ты еблан? Я сказал задумай ЛЮБОЕ ЧИСЛО КРОМЕ НУЛЯЯЯЯ И ЕСТЕСТВЕННО КРОМЕ БУКВ!!!!!!!!!!!!!!!\n");

    }


    return 0;
}
