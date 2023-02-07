#include<stdio.h>
#include<string.h>

//Taking Address(house No. , block, city and state) of 5 People.

struct address{
   char name[100];
   int house;
   char block;
   char city[50];
   char state[50];
};
// function to print information of all 5 person
void printInfo(struct address add)
{
  printf("Name : %s, %d, %c, %s, %s\n" , add.name, add.house, add.block, add.city, add.state);  
  
}
int main(void)
{
   struct address add[4];

//Person 1
  printf("Enter your Info : ");
   scanf("%s\n", &add[0].name);
   scanf("%d\n", &add[0].house);
   scanf("%c\n", &add[0].block);
   scanf("%s\n", &add[0].city);
   scanf("%s", &add[0].state);
   
//Person 2
  printf("Enter your Info : ");
   scanf("%s\n", &add[1].name);
   scanf("%d\n", &add[1].house);
   scanf("%c\n", &add[1].block);
   scanf("%s\n", &add[1].city);
   scanf("%s", &add[1].state);

//Person 3
  printf("Enter your Info : ");
   scanf("%s\n", &add[2].name);
   scanf("%d\n", &add[2].house);
   scanf("%c\n", &add[2].block);
   scanf("%s\n", &add[2].city);
   scanf("%s", &add[2].state);

//Person 4
  printf("Enter your Info : ");
   scanf("%s\n", &add[3].name);
   scanf("%d\n", &add[3].house);
   scanf("%c\n", &add[3].block);
   scanf("%s\n", &add[3].city);
   scanf("%s", &add[3].state);

//Person 5
  printf("Enter your Info : ");
   scanf("%s\n", &add[4].name);
   scanf("%d\n", &add[4].house);
   scanf("%c\n", &add[4].block);
   scanf("%s\n", &add[4].city);
   scanf("%s", &add[4].state);

//Printing all info of user 
   printInfo(add[0]);
   printInfo(add[1]);
   printInfo(add[2]);
   printInfo(add[3]);
   printInfo(add[4]);

}