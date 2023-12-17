#include <stdio.h>

int main()
{
    printf("how many dogs do you have ");
    double dogs;
    scanf("%lf", &dogs);
    printf("%e\n%g\n%f", dogs, dogs, dogs);

    return 0;
}