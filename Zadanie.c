#include <stdio.h>

long int count_odd_numbers(long int n);

int main() {
    count_odd_numbers(100);
    count_odd_numbers(45);
    return 0;
} 

long int count_odd_numbers(long int n) {
    n = n/2;
    return n;
}