#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = 12;
    int y;
    printf("minutes: \n");
    y = get_int();
    printf("bottles: %i\n", x * y);
}