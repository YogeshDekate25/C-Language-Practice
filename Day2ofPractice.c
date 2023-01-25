#include<stdio.h>
//Write a Program to give grades to a student
int main(void) 
{
   int marks;
   printf("Enter The marks : ");
   scanf("%d",&marks);
   if(marks<=100 && marks>=90){
       printf("You've got A Grade \n");
   }
   else if(marks<=90 && marks>=70)
   {
    printf("You've got B Garde \n");
   }
   else if (marks<=70 && marks>=30)
   {
    printf("You've got C Grade \n");
   }
   else if(marks<=30 && marks>=0){
    printf("You are Failed\n");
   }
   else{
     printf("Thank You");
   }
}