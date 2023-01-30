#include<stdio.h>

/* if user is Indian Print "Namaste" and if user is French print "Bonjour".
void Indian(){
    printf("Namaste\n");
}

void French(){
    printf("Bonjour\n");
}

int main(void){
    char ch;
    printf("Enter Your Nationality : "); // enter 'i' for Indian and 'f' for french
    scanf("%ch\n",&ch);
    if(ch == 'i'){
        Indian();
    }
    else{
        French();
    }
}*/

// Calculate Area of circle, Square and Rectangle

int Square(int a){

   printf("Area of Square is %d\n", a*a);
}

int Rectangle(int l , int b){
    printf("Area of Rectangle is %d\n" , l*b);
}

float Circle(float r){
    float pie = 3.14f;
    printf("The are of circle is %f\n", pie*r*r);
}

int main (void){
    int a,l,b,r;
    
    printf("Enter the value of side : ");
    scanf("%d",&a);
    Square(a);
}