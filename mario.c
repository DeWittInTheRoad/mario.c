/**
  *
  * mario.c
  *
  * Brandon DeWitt
  *
  * Makes a two sided Mario pyramid to user's specfications with right/left justification I.E 4 would create:
  *
  *    #  #
  *   ##  ##
  *  ###  ###
  * ####  ####
  */

#include <stdio.h>
#include <cs50.h>

void block(int n);
void space (int n);

int main(void)
{

int pyramid_height = 0;

// gets number initial number between 1 and 23 inclusive.

do
{
    printf("Enter a number: ");
    pyramid_height = get_int();
}
while (pyramid_height < 1 || pyramid_height > 23 );



for (int i =1; i < pyramid_height; i++){
space(pyramid_height-i-1); //sets spaces to get indent
block(i); //sets pyramids
printf("  "); //sets middle
block(i); //sets right aligned pyramid
printf("\n");
}


}
//function to handle printing spaces

void space (int n){
    for (int i = n; i > 0; i--){
        printf(" ");
    }
}

///function to handle printing #s

void block(int n){
    for (int i = 0;i < n ; i++){
        printf("#");
    }

}
