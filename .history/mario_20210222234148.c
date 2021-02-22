#include <stdio.h>

int main(void)
{
    int pyramid_height;
    int z = 1;

    pyramid_height = 4;
    for (int i = 0; i < pyramid_height; i++)
    {
        for (int j = 1; j < pyramid_height - i; j++)
        {
            printf("*");            
        }
        printf("#", z);
        printf("g\n");
    }
}