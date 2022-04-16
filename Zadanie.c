#include <stdio.h>

long int count_odd_numbers(long int n);

int main() {
    long int r = count_odd_numbers(100);
    printf("%ld \n", r);
    return 0;
} 

long int count_odd_numbers(long int n) {
    return (n / 2);
}