#include <stdio.h>
#include <stdlib.h>



int main()
{
  //declaring the variable
   int integer;

   printf("Please, enter 1 or 2 digit integer:");
   integer=getchar();




    while (integer != EOF) { //while the number is not at the end of the file

        if(integer==999) {
            break;
        }
        putchar(integer);
        putchar(integer);
        putchar(integer);
        integer = getchar();


    }




return 0;
}//endmain