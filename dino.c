// C Program for Dino Game
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

// Function to set the console cursor position
void moveTo(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function to pause execution for a given number of
// milliseconds
void pause(unsigned int milliseconds)
{
    clock_t goal = milliseconds + clock();
    while (goal > clock())
        ;
}

// Function to display game information on the console
void displayGameInfo()
{
    system("cls");
    moveTo(10, 2);
    printf("Press X to Exit, Press Space to Jump");
    moveTo(62, 2);
    printf("SCORE : ");
    moveTo(1, 25);
    for (int x = 0; x < 79; x++)
        printf("п");
}

// Global variables for jump height and game speed
int jumpHeight, gameSpeed = 40;

// Function to display the character on the console
void displayCharacter(int jumpType = 0)
{
    static int animationState = 1;

    // Update the jump height based on the jump type
    if (jumpType == 0)
        jumpHeight = 0;
    else if (jumpType == 2)
        jumpHeight--;
    else
        jumpHeight++;

    // Display the character at the specified position
    moveTo(2, 15 - jumpHeight);
    printf("                ");
    moveTo(2, 16 - jumpHeight);
    printf("     мллл      ");
    moveTo(2, 17 - jumpHeight);
    printf("    ллллллл     ");
    moveTo(2, 18 - jumpHeight);
    printf("   ллллллллл    ");
    moveTo(2, 19 - jumpHeight);
    printf("  лллллплллл   ");
    moveTo(2, 20 - jumpHeight);
    printf(" млллллппллллм  ");
    moveTo(2, 21 - jumpHeight);
    printf(" ллллллпплллллл ");
    moveTo(2, 22 - jumpHeight);
    printf(" пллллллппллллп ");
    moveTo(2, 23 - jumpHeight);
    if (jumpType == 1 || jumpType == 2) {
        printf("   ллп плпппл   ");
        moveTo(2, 24 - jumpHeight);
        printf("   лм   лм      ");
    }
    else if (animationState == 1) {
        printf("  пллп  ппп     ");
        moveTo(2, 24 - jumpHeight);
        printf("     лм         ");
        animationState = 2;
    }
    else if (animationState == 2) {
        printf("   плм пл       ");
        moveTo(2, 24 - jumpHeight);
        printf("         лм     ");
        animationState = 1;
    }

    moveTo(2, 25 - jumpHeight);
    if (jumpType != 0) {
        printf("                ");
    }
    else {
        printf("ппппппппппппппппп");
    }
    pause(gameSpeed);
}



    