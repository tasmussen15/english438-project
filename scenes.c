#include <stdio.h>
#include "scenes.h"
#include "utils.h"

// lvl depth 5
void trust0() {
    clear_screen();
    printf(
        "Outer Court\n"
        "Ludovico sends the guard off to join the tumult with his fellow bandits.\n"
        "With the guard distracted, Ludovico opens the gate, seizes two horses, and\n"
        "calls you and the others to follow him.\n"
        "Ludovico and Du Pont each mount a horse and place Annette and yourself on\n"
        "horseback with them.\n"
        "With Ludovico leading the way, you set off as fast as the broken roads would\n"
        "permit, away from the Castle of Udolpho.\n"
        "\n"
        "Congratulations! You have successfully escaped from the Castle of Udolpho!\n\n"
    );

    game_over();
}

void trust1() {
    clear_screen();
    printf(
        "Outer Court\n"
        "Ludovico sends the guard off to join the tumult with his fellow bandits.\n"
        "With the guard distracted, Ludovico opens the gate, mounts a horse, and lifts\n"
        "you and Annette on horseback with him.\n"
        "You set off as fast as the broken roads would permit on Ludovico's horse, away\n"
        "from the Castle of Udolpho.\n"
        "\n"
        "Let's just hope you won't need any money, because the one horse Ludovico took\n"
        "has no hidden bags of bandit booty hiding beneath the saddle...\n"
        "\n"
        "Congratulations! You have successfully escaped from the Castle of Udolpho!\n\n"
    );

    game_over();
}

void distrust() {
    clear_screen();
    printf(
        "Outer Court\n"
        "You suspect Ludovico will tell the guard where you and the others are hiding.\n"
        "As soon as he walks away, you rush out of the opening towards the closed gate\n"
        "and begin desparately trying to force your way through.\n"
        "\n"
        "Annette doesn't even have anything to say as you are all seized by Montoni's\n"
        "men and imprisoned beneath the castle for a long, long time.\n"
        "\n"
        "You have failed to escape from the Caste of Udolpho.\n\n"
    );

    game_over();
}

// lvl 4 depth
void follow() {
    clear_screen();
    printf(
        "Hidden Staircase\n"
        "Ludovico guides you and Du Pont to Annette, and then to an opening into the\n"
        "outer court of the castle.\n"
        "A group of bandits has recently arrived from pillaging and Montoni's men are\n"
        "in a tumult.\n"
        "Ludovico tells you his plan to distract the lone guard so you can all escape.\n"
        "\n"
        "1. Ludovico has brought you this far, trust him and his plan of escape.\n"
        "2. He could still be working for Montoni, don't trust Ludovico.\n\n"
    );

    int choice = get_choice(2);
    if(choice == 1) {
        trust0();
    } else {
        distrust();
    }
}

void get_docs() {
    clear_screen();
    printf(
        "Madame Cheron's Room"
        "You bolt away from Du Pont and Ludovico and barrel through the corridors of\n"
        "Udolpho towards your aunt's room.\n"
        "You go in the closet and find what you're looking for, the written property\n"
        "deeds to your aunt's estate.\n"
        "If Montoni gets ahold of these, you would have no legal ground to reclaim your\n"
        "aunt's former properties that he forced you to sign over.\n"
        "Unfortunately, in your eagerness to retrieve these documents, you didn't\n"
        "notice Montoni leave his party and follow you.\n"
        "\n"
        "Now you've lead Montoni straight to the very documents he needed! Oops...\n"
        "\n"
        "You have failed to escape from the Castle of Udolpho.\n"
    );

    game_over();
}

// lvl 3 depth
void to_stairs() {
    clear_screen();
    printf(
        "Hidden Staircase\n"
        "You abandon Du Pont in his battle with Verezzi, you have more important things\n"
        "to do like trying to stay alive and avoid dangerous men!\n"
        "Ludovico guides you to Annette, and then to an opening into the outer court of\n"
        "the castle.\n"
        "A group of bandits has recently arrived from pillaging and Montoni's men are\n"
        "in a tumult.\n"
        "Ludovico tells you his plan to distract the lone guard so you can all escape.\n"
        "\n"
        "1. Ludovico has brought you this far, trust him and his plan of escape.\n"
        "2. He could still be working for Montoni, don't trust Ludovico.\n\n"
    );

    int choice = get_choice(2);
    if(choice == 1) {
        trust1();
    } else {
        distrust();
    }
}

void down_cor() {
    clear_screen();
    printf(
        "You abandon Du Pont to his battle with Verezzi and barrel down the corridors\n"
        "of Udolpho, terrified of encountering any other armed men.\n"
        "In your frensy and exhaustion, you bump into a tapesty and fall straight\n"
        "through it into a hidden passageway.\n"
        "The passageway entrance closes behind you and seals you in complete darkness.\n"
        "\n"
        "Unable to navigate the confusing hidden passageways of Udolpho in the dark,\n"
        "you prepare to live out the rest of your short life in the walls of Udolpho.\n"
        "\n"
        "You have failed to escape from the Castle of Udolpho.\n"
    );

    game_over();
}

void stop_fight() {
    clear_screen();
    printf(
        "Unable to intervene, you beg the two men to stop.\n"
        "Du Pont gains the upperhand and forces Verezzi to the floor, stunning him.\n"
        "You hear steps ascending the hidden staircase in your room... and Ludovico\n"
        "emerges from the darkness, beckoning you and Du Pont to follow him.\n"
        "\n"
        "1. Things are happening too fast! Follow Ludovico down the hidden staircase.\n"
        "2. You can't leave yet! Go back to your aunt's room to grab her estate papers.\n\n"
    );

    int choice = get_choice(2);
    if(choice == 1) {
        follow();
    } else {
        get_docs();
    }
}

// lvl 2 depth
void no_wait() {
    clear_screen();
}

void wait_door() {
    clear_screen();
    printf(
        "Connecting Corridor\n"
        "You wait at the door, but can't contain your excitement and finally rush out\n"
        "the door, but on encountering the arms of a stranger, you faint from surprise.\n"
        "When you come to, Ludovico is gone, and you are acquainted with the prisoner,\n"
        "an unknown secret admirer of yours named Du Pont.\n"
        "Suddenly, Montoni's henchman Verezzi jumps out of the shadows and attacks Du\n"
        "Pont while Annette runs to the staircase in search of Ludovico.\n"
        "\n"
        "1. You're in danger! Follow Annette to the staircase to escape.\n"
        "2. Panic! Run the other way down the corridor.\n"
        "3. You must help, plead with Du Pont and Verezzi to break up their fight.\n\n"
    );

    int choice = get_choice(3);
    if(choice == 1) {
        to_stairs();
    } else if(choice == 2) {
        down_cor();
    } else {
        stop_fight();
    }
}

// lvl 1 depth
void send_ludo() {
    clear_screen();
    printf(
        "Ludovico leaves to fetch the prisoner, and shortly after the music stops.\n"
        "You think you can just make out the sound of light steps far off down the\n"
        "corridor over the shouts of Montoni's party.\n"
        "In your excitement to meet Valancourt, you rush to the door.\n"
        "\n"
        "1. You can't wait any longer, rush into the corridor to see Valancourt.\n"
        "2. Be patient, wait at the door for Ludovico.\n\n"
    );

    int choice = get_choice(2);
    if(choice == 1) {
        no_wait();
    } else {
        wait_door();
    }
}

void go_alone() {

}

void no_meet() {

}

void start() {
    clear_screen();
    printf(
        "Emily's Room\n"
        "You, your servant Annette, and Montoni's servant, Ludovico, who has affection\n"
        "for Annette, are in your room.\n"
        "There is a familiar French tune playing from a lute outside the window.\n"
        "Ludovico has informed you there is a French Chevalier imprisoned in the castle\n"
        "who wishes to meet with you this night.\n"
        "This Chevalier could be your beloved Valancourt, who you wish to see more than\n"
        "anyone in the world, but can you trust Ludovico, a servant of Montoni's?\n"
        "\n"
        "1. Trust Ludovico, send him to bring the prisoner here.\n"
        "2. Don't trust Ludovico, search for the prisoner on your own.\n"
        "3. The prisoner surely can't be Valancourt, don't meet with him.\n\n"
    );

    int choice = get_choice(3);
    if(choice == 1) {
        send_ludo();
    } else if(choice == 2) {
        go_alone();
    } else {
        no_meet();
    }
}