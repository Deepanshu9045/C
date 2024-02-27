#include<stdio.h>
#include<conio.h>
void main()
{ int length,breadth,height,volume;
  clrscr();
  printf("Enter the length, breadth and height of cuboid:\n");
  scanf("%d \n%d \n%d",&length,&breadth,&height);

  printf("Length=%d\n",length);
  printf("breadth=%d\n",breadth);
  printf("height=%d\n",height);

  volume=length*breadth*height;
  printf("Volume of cuboid is=%d",volume);
  getch();
}