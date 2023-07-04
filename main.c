#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{
    int number,gnumber,attempts;

    srand(time(0));
    number=rand()%100+1;
    //printf("Guess the number is %d",number);

    do{
        printf("Guess the number between (1-100) : \n",gnumber);
        scanf("%d",&gnumber);
        attempts++;


    if (gnumber>number){
        printf("Guessed number is high  \n");


    }
    else if (gnumber<number){
        printf("Guessed number is low  \n");

    }
    else {
        printf("You have guessed it right in %d attempts",attempts);

    }
    }while(gnumber!=number);

        return 0;

}

