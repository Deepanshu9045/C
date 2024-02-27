#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw saffron rectangle
    setfillstyle(SOLID_FILL, COLOR(255, 153, 51));
    bar(100, 100, 500, 200);

    // Draw white rectangle
    setfillstyle(SOLID_FILL, WHITE);
    bar(100, 200, 500, 300);

    // Draw green rectangle
    setfillstyle(SOLID_FILL, COLOR(18, 136, 7));
    bar(100, 300, 500, 400);

    // Draw navy blue circle for Ashoka Chakra
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, COLOR(0, 0, 128));
    circle(300, 250, 40);
    floodfill(300, 250, BLUE);

    // Wait for a key press and close the graphics window
    getch();
    closegraph();

    return 0;
}