#include<stdio.h>

//Calculating perimeter of a rectangle with input function
/*int main(void)
{
    int a;
    int b;
    
    printf("Length of the rectangle is ");
    scanf("%d", &a);

    printf("Breadth of the rectangle is ");
    scanf("%d", &b);

    printf("The perimeter of rectangle is %d \n", a+b);

    return 0;
}*/

//Checking Whethere the given number is odd or even
int main(void)
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    
    if (x%2==0)
    {
        printf("The number is even");
    }
    else{
        printf("The number is odd ");
    }
    return 0;
}