#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void drawHut() {
    // Draw hut body
    rectangle(150, 200, 450, 400);

    // Draw hut roof
    line(150, 200, 300, 100);
    line(300, 100, 450, 200);

    // Draw door
    rectangle(250, 300, 350, 400);
}

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw the hut
    drawHut();

    // Wait for a key press and close the graphics window
    getch();
    closegraph();

    return 0;
}