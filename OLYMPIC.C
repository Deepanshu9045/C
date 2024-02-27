#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Draw the first ring (blue)
    setcolor(BLUE);
    circle(150, 150, 50);

    // Draw the second ring (yellow)
    setcolor(YELLOW);
    circle(250, 150, 50);

    // Draw the third ring (white)
    setcolor(WHITE);
    circle(350, 150, 50);

    // Draw the fourth ring (green)
    setcolor(GREEN);
    circle(200, 200, 50);

    // Draw the fifth ring (red)
    setcolor(RED);
    circle(300, 200, 50);

    getch();
    closegraph();
    return 0;
}