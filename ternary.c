#include <stdio.h>

int main()
{
    int money = 20;
    int cost = 30;

    money > cost ? printf("you can afoords it %d \n"): printf("sorry you can not afford \n", cost - money);
    return 0;
}