#include<stdio.h>
#include<conio.h>  
main()
{
   int age;
   char MaritalStatus,Gender;
   clrscr();
   printf("Enter MaritalStatus, Gender, Age : (e.g. m,f,25) : ");
   scanf("%c,%c,%d",&MaritalStatus,&Gender,&age);
   if(MaritalStatus=='m')
   {
    printf("You can not marry!");
   }
   else if(MaritalStatus=='u')
   {
    if(Gender=='m')
    {
      if(age>=21)
          printf("You can marry!");
      else
          printf("You can not marry!");
    }
    else if(Gender=='f')
    {
      if(age>=18)
          printf("You can marry!");
      else
          printf("You can not marry!");
    }
    else
          printf("Invalid input Gender");
   }
   else
printf("Invalid input Marital Status ");
   getch();
}