#include <stdio.h>

int main()
{
    printf("please enther the amount of pizza you eat: ");

    int slices;
    int calories= 250;
    scanf("%d", &slices);

    switch(slices)
    {
        case 0:
        printf("Good job bro");
        break;

        case 1:
        printf("you are doing ok");
        break;

        case 2:
        printf(" you need to be careful");
        break;

        default:
        printf("your one slice away from fat");
        break;
    }
    printf("your total calories is : %d\n " , slices * calories);
}