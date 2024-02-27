#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{ int val;
  struct node *next;
};
void init(struct node * *s, int v)
{ struct node *x,*p;
  x=(struct node *)malloc(sizeof(struct node));
  x-val=v;
  x-next=Null;
  if(*s==Null)
  *s=x;
  else
  {p=*s;
  while(p=next!=Null)
  p=p-next;
  p-next=x;
  }
}
void main()
{ struct node *start,*p;
  int n,v,i;
  clrscr();
  printf("Enter how many values required:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {printf("Enter %d value:",i);
  scanf("%d",&v);
  init(& start,v);
  }
  p=start;
  printf("\nThe list of value is \n");
  while(p!=Null)
  {printf("%d",p-val);
  p=p-next;
  }
  getch();
  }