#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{ FILE *fe,*fo,*fpm,*fpr;
int arr[10],i,j,flag,s;
clrscr();
printf("\n Enter 10 nos:\n");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
fe=fopen("c:\\FILE\\even.txt","w");
fo=fopen("c:\\FILE\\odd.txt","w");
fpm=fopen("c:\\FILE\\prime.txt","w");
fpr=fopen("c:\\FILE\\perfect.txt","w");
for(i=0;i<10;i++)
{
 if(arr[i]%2==0)
 fprintf(fe,"%d\n",arr[i]);
  if(arr[i]%2!=0)
 fprintf(fo,"%d\n",arr[i]);
 flag=0;
 for(j=2;j<arr[i];j++)
  if(arr[i]%j==0)
  flag++;
  if(flag==0)
 fprintf(fpm,"%d\n",arr[i]);
 s=0;
 for(j=1;j<=arr[i]/2;j++)
  if(arr[i]%j==0)
  s=s+j;
  if(s==arr[i])
 fprintf(fpr,"%d\n",arr[i]);
 }
 fclose(fe);
 fclose(fo);
 fclose(fpm);
 fclose(fpr);
 }