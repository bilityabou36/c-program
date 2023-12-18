#include <stdio.h>



int main ()
{
    int numberOfPizza = 7;
    int numberOfEater = 3;
    int remaainingPizza = numberOfPizza % numberOfEater;

    printf("%i\n",remaainingPizza);

    return 0;
}

int increment()
{
    int numberOfBread = 20;
    numberOfBread += 20;
    printf("%i\n",numberOfBread);

   return 0;


}