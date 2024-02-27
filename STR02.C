/*PROGRAM FOR READING A SERIES OF WORDS*/
#include<stdio.h>
#include<conio.h>
void main()
{ char word1[10],word2[10],word3[10],word4[10];
  clrscr();
  printf("Enter text:\n");
  scanf("%s %s",word1,word2);
  scanf("%s %s",word3,word4);

  printf("\n");
  printf("word1=%s\nword2=%s\n",word1,word2);
  printf("word3=%s\nword4=%s\n",word3,word4);
  getch();
}