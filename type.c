#include <stdio.h>

int main (){
    printf("what is the number of egg you have for the day ");
    int egg;
    scanf("%i", &egg);
    double dozen = (double) egg / 12;
    printf("you have %f dozen of egg\n", dozen);
}