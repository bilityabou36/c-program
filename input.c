


#include <stdio.h>

int main()
{
    int radius = 0;
    printf("please enter a radius: ");
    scanf("%i", &radius);
    double area = 3.14369 * (radius * radius);
    printf("the area is %f\n", area);
    return 0;

}