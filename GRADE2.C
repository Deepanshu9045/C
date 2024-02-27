#include<stdio.h>
#include<conio.h>
void main()
{ int marks,percent,n,i,sum=0;

  clrscr();
  printf("Enter the number of subject:\n");
  scanf("%d",&n);

  printf("Enter the marks of SUBJECT :\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&marks);
   sum=sum+marks;
   }
  percent=(sum)/n;
  printf("Your percentage is=%d\n",percent);
  /*GRADING SYSTEM*/
  printf("Grade as per your Percentage:  ");

  if(percent<=100&&percent>=91)
  {printf("A1-Grade");
   }
  if(percent<=90&&percent>=81)
 { printf("A2-Grade");
  }
  if(percent<=80&&percent>=71)
 { printf("B1-Grade");
  }
  if(percent<=70&&percent>=61)
 { printf("B2-Grade");
 }
 if(percent<=60&&percent>=51)
 { printf("C1-Grade");
 }
   if(percent<=50&&percent>=41)
 { printf("C2-Grade");
 }
 if(percent<=40&&percent>=33)
 { printf("D-Grade");
 }
 if(percent<=32)
 {printf("D-Grade  ");
  printf("[You are Failed]");
 }
 getch();
}