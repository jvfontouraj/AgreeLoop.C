//To run this code, go to the project file at https://bit.ly/3wbtGku and type ./AgreeLoop at the terminal

#include <cs50.h>  //cs50 library
#include <stdio.h>

//variables declaration
char c;
int x;

int main(void){  
    do{
        c = get_char("do you agree?\n");

        if (c == 'Y' || c == 'y'){
          printf("agreed.\n");
          x = 1; //Indicates a valid input
	      }
        else if (c == 'N' || c == 'n'){
          printf("not agreed.\n");
          x = 1; //Indicates a valid input
        }
        else{
          x = 0; //Indicates an invalid input
        } 
    }
    while (x == 0); //I tried to put a char variable but 
                    //it doesn't work, so I created an int
                    //variable "x"  to make possible the 
                    //condition in the "do while loop".
}