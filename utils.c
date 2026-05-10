#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include "scenes.h"

// Prompts user to press the enter key
// Displays a different prompt if this is the start of the game (start != 0)
void wait_for_enter(int start) {
    if(start == 1) {
        printf("Press Enter to Start Game\n");
    } else if (start == 2) {
        printf("Press Enter to begin your escape...\n");
    } else {
        printf("Press Enter to continue...\n");
    }

    while (getchar() != '\n');
}

// Clears terminal screen, options for windows or mac/linux
void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Prompts the user for an integer between 1 and max, returns their choice
int get_choice(int max) {
    int input;
    printf("Your choice: ");

    while (1) {
        input = fgetc(stdin) - '0';   // convert ASCII of num to int

        while (getchar() != '\n');  // flushes any extra input and '\n'

        if (input > 0 && input <= max)
            return input;
        printf("Pease enter a number between 1 and %i: ", max);
    }
}

int game_over() {
    printf("1. Play again\n");
    printf("2. Quit\n");

    int choice = get_choice(2);
    if(choice == 1) start();
    else exit(0);
}