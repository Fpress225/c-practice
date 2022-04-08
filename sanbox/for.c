#include <stdio.h>

int main() {
    for (int g = 666; g < 741; g++) {
        if ( g < 701) {
            printf("1 otrezok:%d\n", g);
        } else if ((700 < g) && (g < 721)) {
            printf("2 otrezok:%d\n", g);
        } else if (g > 720) {
            printf("3 otrezok:%d\n", g);
        }
    }

    return 0;
}
