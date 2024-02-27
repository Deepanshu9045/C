#include <graphics.h>
#include<stddef.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

   { // Coordinates of the triangle
    int x1 = 100, y1 = 300;
    int x2 = 300, y2 = 300;
    int x3 = 200, y3 = 100;

    // Draw the triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Wait for a key press and close the graphics window
    getch();
    closegraph();

    return 0; }
}