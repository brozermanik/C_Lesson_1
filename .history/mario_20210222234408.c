#include <stdio.h>

int main(void)
{
    int pyramid_height;

    pyramid_height = 4;
    for (int i = 0; i < pyramid_height; i++)
    {
        for (int j = 1; j < pyramid_height - i; j++)
        {
            printf("*");            
        }
        for (int z = 0; z < pyramid_height; z++)
        {
            printf("#");
        }           
        printf("g\n");
    }
}