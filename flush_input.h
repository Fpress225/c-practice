#include <stdio.h>

void flush_input(void) {
    char c;
    while ((c = getc(stdin)) != '\n' && c != EOF);
}
