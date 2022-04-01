#include <stdio.h>

int main(void) {
    printf("Hello, Sanechka. Eto vse dly teby. Vozmi kalkylator\n");
    printf("Zadymai lyboe cheloe chislo. U ymnoch ego na 6\n");
    printf("Podeli ego na 2\n");
    printf("Vedi polychenor chislo:\n");
    int x, y, t;
    scanf("%d", &x);
    y = x * 2;
    t = y / 6;
    printf("Teper magic. I ygaday chislo.Gotov?\n");
    printf("Tvoe chislo: %d\n", t );
    return 0;
}
