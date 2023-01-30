#include<stdio.h>

// if user is Indian Print "Namaste" and if user is French print "Bonjour".
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
}