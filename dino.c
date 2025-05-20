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