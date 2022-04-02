#include <stdio.h>
int main(void) {
    printf("Hello, Sanechka. Eto vse dly teby. Vozmi kalkylator\n");
    printf("Zadymai lyboe cheloe chislo, krome 0. U ymnoch ego na 6\n");
    printf("Podeli ego na 2\n");
    printf("Vedi polychenor chislo:\n");
    int y, t, x;
    scanf("%d", &x);
    y = x * 2;
    t = y / 6;
    if(t != 0 ){
        printf("Teper magic. I ygaday chislo.Gotov?\n");
        printf("Tvoe chislo: %d\n", t );
    }
    else if ( x == 0){
        printf("Ti eblan? I skazal LYBOEEE CHISLO KROME 0!!!!!!!!!\n");

    }


    return 0;
}
