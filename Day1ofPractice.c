#include<stdio.h>
//Calculating perimeter of a rectangle with input function
int main(void)
{
    int a;
    int b;
    
    printf("Length of the rectangle is ");
    scanf("%d", &a);

    printf("Breadth of the rectangle is ");
    scanf("%d", &b);

    printf("The perimeter of rectangle is %d \n", a+b);

    return 0;
}