#include <graphics.h>
#include <math.h>

void drawCircle(int xc, int yc, int radius) {
    float x, y;
    float theta;

    for (theta = 0; theta <= 360; theta += 0.1) {
	// Convert polar coordinates to Cartesian coordinates
	x = xc + radius * cos(theta * 3.14159 / 180);
	y = yc + radius * sin(theta * 3.14159 / 180);

	// Round off to the nearest integer
      {	int x_rounded = round(x);
	int y_rounded = round(y);

	// Plot the points
	putpixel(x_rounded, y_rounded, WHITE);
	}
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int xc, yc, radius;

{    // Get circle center and radius from user
    printf("Enter the center coordinates (x y): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter the radius: ");
    scanf("%d", &radius);

    // Draw the circle using DDA algorithm
    drawCircle(xc, yc, radius);

    delay(5000);
    closegraph();

    return 0;    }
}