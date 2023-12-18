#include <stdio.h>
#include <math.h>

int main()
{
    printf("please provide the numbers for calculation ");
    double rightSide;
    double leftSide;
    double hypotenuse = sqrt((rightSide * rightSide) + (leftSide * leftSide));
    scanf("%lf\n%lf", &leftSide, &rightSide);
    printf("your hypotenuse is %lf\n", hypotenuse);
    return 0;

}