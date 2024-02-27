#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 main ()
 {
    FILE *allNumbersFile,*oddNumbers,*evenNumbers;
    char c,storeNum[10];
    int number=0;
    allNumbersFile=fopen("C:\\FILE\\AllNumbers.txt","r");

     if(allNumbersFile==NULL)
     {
      printf("AllNumbers File Not Found\n");
      exit(0);
     }

    oddNumbers=fopen("c:\\FILE\\OddNumbers.txt","w");
     evenNumbers=fopen("C:\\FILE\\EvenNumbers.txt","w");
    if(oddNumbers==NULL)
    {
     printf("OddNumbers File Not Found\n");
     exit(0);
    }
    if(evenNumbers==NULL)
    {
     printf("EvenNumbers File Not Found\n");
     exit(0);
    }
while(1)
  {
   c=fgetc(allNumbersFile);
   if(c!=EOF)
   {
    if(c!='\n')
    {
     number=(number*10)+(c-'0');
    }
    else
    {
     itoa(number, storeNum, 10);
     strcat(storeNum,"\n");
     if(number%2==0)
     {
      fputs(storeNum,evenNumbers);
     }
     else
     {
      fputs(storeNum,oddNumbers);
     }
  number=0;
    }

    }
    else
    {
  //For Last number
     if(number!=0){
      itoa(number, storeNum, 10);
      strcat(storeNum,"\n");
      if(number%2==0)
      {
       fputs(storeNum,evenNumbers);
      }
      else
      {
       fputs(storeNum,oddNumbers);
      }
     }

     break;
    }
  }
  printf("Sucessfully Separated\n");
  fclose(allNumbersFile);
  fclose(oddNumbers);
  fclose(evenNumbers);
  getch();
}