#include <graphics.h>  
#include <stdlib.h>  
#include <math.h>  
#include <stdio.h>  
#include <conio.h>  

class bresen  
{  
    float x, y, x1, y1, x2, y2, dx, dy, m, c, xend;  
public:  
    void get ();  
    void cal ();  
};  

void main ()  
{  
    bresen b;  
    b.get ();  
    b.cal ();  
    getch ();  
}  

void bresen::get ()  
{  
    printf("Enter start & end points\n");  
    printf("enter x1, y1, x2, y2\n");  
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);  
}  

void bresen::cal ()  
{  
    /* request auto detection */  
    int gdriver = DETECT, gmode, errorcode;  
    /* initialize graphics and local variables */  
    initgraph(&gdriver, &gmode, NULL);  
    /* read result of initialization */  
    errorcode = graphresult ();  
    if (errorcode != grOk)    /*an error occurred */  
    {  
        printf("Graphics error: %s \n", grapherrormsg(errorcode));  
        printf("Press any key to halt:");  
        getch ();  
        exit (1); /* terminate with an error code */  
    }  
    dx = x2 - x1;  
    dy = y2 - y1;  
    m = dy / dx;  
    c = y1 - (m * x1);  
    if (dx < 0)  
    {  
        x = x2;  
        y = y2;  
        xend = x1;  
    }  
    else  
    {  
        x = x1;  
        y = y1;  
        xend = x2;  
    }  
    while (x <= xend)  
    {  
        putpixel(x, y, RED);  
        y = m * x + c;  
        x++;  // Increment x in each iteration
    }  
}