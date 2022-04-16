#include <stdio.h>

long int count_odd_numbers(long int n);

int main() {
    for (;;) {
        int chislo;
        scanf("%d", chislo);
        long int r = count_odd_numbers(chislo);
        printf("%ld \n", r);
    }
    return 0;
} 

long int count_odd_numbers(long int n) {
    return n / 2;
}