#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int gd = DETECT ,gm, i;
    float x, y,dx,dy,steps,xinc,yinc;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    x0 = 100 , y0 = 200, x1 = 500, y1 = 300;
    dx =(x1 - x0);
    dy =(y1 - y0);
    if(dx>=dy)
	   {
	steps = dx;
    }
    else
	   {
	steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    for(i=0;i<= steps;i++)
    {

	xinc= xinc+ dx;
	yinc= yinc+ dy;
	putpixel(xinc, yinc,1);
    }
    getch();
    closegraph();
}
