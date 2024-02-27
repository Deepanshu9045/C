#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{

int gdrive = DETECT, gmode;
int midx,midy,radius;

initgraph(&gdrive,&gmode,"C:\\TC\\BGI");
printf("Enter radius of circle:");
scanf("%d",radius);
midx=getmaxx()/2;
midy=getmaxy()/2;

circle(midx,midy,radius);
getch();
closegraph();
}
