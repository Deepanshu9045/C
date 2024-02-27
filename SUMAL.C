  #include<stdio.h>
  #include<conio.h>
  void main()
  { int a[50],i,n,sum=0;
   clrscr();
   printf("\nEnter how many number you want to add:\n");
   scanf("%d",&n);
    printf("\nEnter the numbers you want to add:\n");
    for(i=0;i<n;i++)
     {scanf("%d",&a[i]);
      sum=sum+a[i];
     }
    printf("\Sum of numbers is=%d",sum);
    getch();
  }