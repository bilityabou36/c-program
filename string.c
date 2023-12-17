#include <stdio.h>

int main()
{
    printf("hey dude enter your name!\n");
    char name[31];
    scanf("%s", name);
    printf("Do you even lift? %s \n", name);

    return 0;
}