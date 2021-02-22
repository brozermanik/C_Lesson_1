#include <stdio.h>

int main(void)
{
    int pyramid_height;

    pyramid_height = 4;
    for (int i = 0; i < pyramid_height; i++)
    {
        for (int j = 0; j < pyramid_height - i; j++)
        {
            printf("*");

        }
        printf("g\n");
    }
}