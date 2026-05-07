#include <stdio.h>
#include <stdlib.h>
#include "ascii.h"

int main() {
    printf("%s", TITLE);
    printf("A text-based Choose Your Own Adventure game by Thomas Asmussen\n");

    int input = fgetc(stdin) - '0';

    if(input == 1) {
        printf("You entered 1!\n");
    } else {
        printf("Not 1\n");
    }

    return 0;
}
