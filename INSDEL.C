#include<stdio.h>
#include<conio.h>
struct node
{
 int val;
 struct node *next;
};
void main()
{
 node *start,*p,*x.*p+r;
 int ch,v;
 do
 {
  clrscr();
  printf("\n1.Insert at Top");
  printf("\n2.Insert at Bottom");
  printf("\n3.Delete from Top");
  printf("\n4.Delete from Bottom");
  printf("\n5.Display");
  printf("\n5.Exit");
  printf("\n-----------------------");

  printf("\nEnter your Choic:");
  scanf("%d",&ch);

  switch(ch)
  {
  case 1:
  printf("Enter the value to insert:");
  scanf("%d",&v);
  x=new node;
  x->val=v;
  x->next=NULL;
  if(start==NULL)
  start=x;
  else
  {
   x->next=start;
   start=x;
  }
  break;

  case 2:
  printf("Enter the value to insert:");
  scanf("%d",&v);
  x=new node;
  x->val=v;
  x->next=NULL;
  if(start==NULL)
  start=x;
  else
  {
   p=start;
   while(p->next!=NULL)
   p=p->next;
   p->next=x;
  }
  break;

  case 3:
  if(start==NULL)
  printf("\nLIST IS EMPTY");
  else
  {
   p=start;
   start=start->next;
   printf("\nDelete Value=%d",p->val);
   delete p;
  }
  break;

  case 4:
  if(start==NULL)
  printf("\nLIST IS EMPTY");
  else if(start->next==NULL)
  {
   printf("Delete value=%d",start->val);
   delete start;
   start=NULL;
  }
  else
  {
   p=start;
   ptr=start->next;
   while(ptr->next!NULL)
   {
    p=ptr;
    ptr=ptr->next;
   }
  p->next=NULL;
  printf("\nDelete Value=",ptr->val);
  delete ptr;
  }
  break;

  case 5:
  p=start;
  while(p!=NULL)
  {
  printf("p->Val");
  p=p->next;
  }

  case 6:
  printf("Exiting.....");
  break;
  default:
  printf("\nInvalid choice");
  getch();
  while(ch!=6);
 }
}


