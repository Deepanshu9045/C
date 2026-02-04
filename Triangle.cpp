#include <graphics.h>
#include <conio.h>  // for getch()

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, ""); // initialize graphics
    line(150, 150, 450, 150);
    line(150, 150, 300, 350);
    line(450, 150, 300, 350);
    getch();
    closegraph();
    return 0;
}
