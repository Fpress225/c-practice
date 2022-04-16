#include <stdio.h>

int are_in_love(int first_flower_petals, int second_flower_petals);

int main() {
    int r = are_in_love(34, 65);
    printf("%d\n", r);
    return 0;
}




int are_in_love (int first_flower_petals, int second_flower_petals) {
    if((first_flower_petals % 2 == 0 && second_flower_petals % 2 == 0) || (first_flower_petals % 2 == 1 && second_flower_petals % 2 == 1)) {
        return 0;
    }
    return 1;
} 