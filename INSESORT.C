/*INSERTION SORTING*/
void main()
{
 int list[10],i,j,t;
 clrscr();
 printf("\nEnter 10 Numbers : ");
 for(i=0;i<10;i++)
  scanf("%d",&list[i]);
 printf("\nThe Unsorted List is \n");
 for(i=0;i<10;i++)
  printf("%d, ",list[i]);

 for(i=1;i<10;i++)
 {
  j=i-1;
  t=list[i];
  while(j>=0 && t<list[j])
  {
   list[j+1]=list[j];
   j--;
  }
 list[j+1]=t;
 }
 printf("\nThe Sorted List is \n");
 for(i=0;i<10;i++)
  printf("%d, ",list[i]);
 getch();
}
