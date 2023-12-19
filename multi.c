#include <stdio.h>

int main()
{
    char favFood[50];
    int charCount = 0;
    scanf("%s 49", favFood);

    while(favFood[charCount] != '\0'){
        charCount++;
     

    printf(" the character count is %d\n", charCount);
    return 0;
}
