#include<stdio.h>
#include<conio.h>
void main()
{ int b,h,area;
  clrscr();
  printf("Enter Height and Base Of Triangle : \n");
  scanf("%d %d",&h,&b);

  printf("Height=%d\n",h);
  printf("Base=%d\n",b);
    area = (h*b)/2;
    printf("Area of Triangle is: %d\n",area);
  getch();
}