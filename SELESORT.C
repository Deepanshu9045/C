/*SELECTION SORTING*/
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

 for(i=0;i<10;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(list[i]>list[j])
   {
    t=list[i];
    list[i]=list[j];
    list[j]=t;
   }
  }
 }
 printf("\nThe Sorted List is \n");
 for(i=0;i<10;i++)
  printf("%d, ",list[i]);
 getch();
}
