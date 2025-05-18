// C Program for Dino Game
#include <conio.h>
#include <iostream>
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