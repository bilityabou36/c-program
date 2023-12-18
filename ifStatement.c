#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isPizzaHealthy;
    printf("Do you thing pizza is health? 1 for yes 0 for no: ");
    int eval;
    scanf("%d", &eval);
    isPizzaHealthy = eval;
    if(isPizzaHealthy)
    {
    printf("welcome to pizza club");
    }
}