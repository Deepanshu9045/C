#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{ FILE *fp;
 fp=fopen("c:\\abc.txt","w");
 getch();
 fclose(fp);
}