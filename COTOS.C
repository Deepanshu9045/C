#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{ int i,k;
  char word[20];
  clrscr();
  printf("Enter a word in full capital or small case :\n");
  scanf("%s",word);
  k=strlen(word);
  printf("Word before conversion :\n");
  printf("%s\n",word);

  for(i=0;i<k;i++)
  { if(word[i]>='a'&&word[i]<='z')
  word[i]=word[i]-32;
  else
  word[i]=word[i]+32;
  }
  printf("Word after conversion is :\n");
  printf("%s\n",word);
  getch();
}
