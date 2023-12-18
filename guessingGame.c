



#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{   
    int maxValue =5;
    srand(time(NULL));
    int randomNumber = rand() % maxValue +1 ;

    printf("%d\n",randomNumber);

    printf("guess a number 0 - %d: ", maxValue);
    int input;
    scanf("%d", &input);

    if(input == randomNumber)
    {
        printf("you win");
    } else
    {
        printf("Please try again");
    }


}