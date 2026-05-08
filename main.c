#include <stdio.h>
#include <stdlib.h>
#include "ascii.h"

void wait_for_enter(int start) {
    if(start) {
        printf("Press Enter to Start Game\n");
    } else {
        printf("Press Enter to continue...\n");
    }

    while (getchar() != '\n');
}

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    printf("%s", CASTLE);
    printf("%s", TITLE);
    printf("A text-based Choose Your Own Adventure game by Thomas Asmussen\n\n");

    wait_for_enter(1);
    clear_screen();

    printf("The Story So Far:\n\n");
    printf(
        "You play as Emily St. Aubert, a recently orphaned child of a landed rural French\n"
        "family. Your guardianship has fallen to your inaffectionate aunt, Madame Cheron.\n"
        "She separates you from your beloved Valancourt, a handsome gentleman of good\n"
        "status, and then marries Montoni, the scheming Italian nobleman. Montoni forces\n"
        "you and your aunt to move to his mysterious castle: the Castle of Udolpho. Here\n"
        "he reveals his true character as a villainous leader of bandits and imprisons\n"
        "your aunt, ultimately leading to her unfortunate death.\n\n"
    );

    printf(
        "With your aunt deceased, it's only a matter of time before Montoni decides to\n"
        "get rid of you, too. That is why tonight, you and your faithful servant,\n"
        "Annette, will brave the wrath of Montoni and the schemes of your kidnapping\n"
        "suitor Count Morano to attempt to make your escape from the Castle of Udolpho.\n\n"
    );

    wait_for_enter(0);
    clear_screen();

    char buffer[256];
    printf("Enter a number:");
    fgets(buffer, sizeof(buffer), stdin);
    int input = buffer[0] - '0';

    if(input == 1) {
        printf("You entered 1!\n");
    } else {
        printf("Not 1\n");
    }

    wait_for_enter(0);

    return 0;
}
