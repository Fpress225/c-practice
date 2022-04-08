#include <stdio.h>

int main() {
    int f = 0;
    for (;;) {
        f++;
        printf("%d\n", f);

        if (f == 20) {
            break;
        }
    }

    return 0;
}