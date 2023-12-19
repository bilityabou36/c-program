#include <stdio.h>

int main()
{   printf("what is your number: ");
    int max;
    scanf("%d", &max);
    for(int i = 0; i < max; i++)
    printf("%d\n", i);
}