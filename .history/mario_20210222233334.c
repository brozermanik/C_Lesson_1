#include <stdio.h>

int main(void)
{
    int pyramid_height;

    pyramid_height = 4;
    for (int i = 1; i < pyramid_height; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" ");

        }
        printf("g\n");
    }
}