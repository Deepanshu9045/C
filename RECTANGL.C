#include <graphics.h>
#include <stddef.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

{    // Coordinates of the rectangle
    int x1 = 100, y1 = 100;
    int x2 = 300, y2 = 200;

    // Draw the rectangle
    rectangle(x1, y1, x2, y2);

    // Wait for a key press and close the graphics window
    getch();
    closegraph();

    return 0;    }
}