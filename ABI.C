#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the operation \n if Even then Sorting & \n if Odd searching : ");
scanf("%d",&a);
if(a%2==0)
{
printf("sorting will done\n");
int a[50],n,i,num,c=0;
clrscr();
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter %d elements in the array\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter desired element to be searched\n");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(num==a[i])
{
c++;
break;
}
}
if (c==1)
printf("search is successfull");
else
printf("search is unsuccessful");
}
else
{
int a[50],n,i,j,t;
printf("Enter the size of array:  ");
scanf("%d",&n);

printf("Enter %d elements in array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Ascending order\n");
for(i=0;i<(n-1);i++)
{
for(j=(i+1);j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("The sorted array is\n");
for(i=0;i<n;i++)
{
printf("%4d",a[i]);
}
}
getch();
}