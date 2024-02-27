#include <graphics.h>
#include <stddef.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Coordinates of the square
  { int x1 = 100, y1 = 100;
    int sideLength = 150;  // Length of each side

  {  // Calculate the coordinates of the other three corners
    int x2 = x1 + sideLength, y2 = y1;
    int x3 = x1 + sideLength, y3 = y1 + sideLength;
    int x4 = x1, y4 = y1 + sideLength;

    // Draw the square
    rectangle(x1, y1, x3, y3);

    // Wait for a key press and close the graphics window
    getch();
    closegraph();

    return 0;  }     }
}