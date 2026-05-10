#include <stdio.h>
#include <stdlib.h>
#include "ascii.h"
#include "scenes.h"
#include "utils.h"

int main() {
    clear_screen();
    printf("%s", CASTLE);
    printf("%s", TITLE);
    printf("A Choose Your Own Adventure computer game by Thomas Asmussen\n\n");

    wait_for_enter(1);
    clear_screen();

    printf("Controls:\n\n");
    printf(
        "The game will describe your current situation and give you a list of choices\n"
        "for how to continue. You must enter the number matching your choice and hit\n"
        "Enter to confirm.\n\n"
    );

    wait_for_enter(0);
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
        "Annette, will attempt to make your escape from the Castle of Udolpho, or suffer\n"
        "the wrath of Montoni!\n\n"
    );

    wait_for_enter(2);
    
    start();

    return 0;
}
