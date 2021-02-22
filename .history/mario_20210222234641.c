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
        for (int z = 1; z < i; z++)
        {
            printf("#", z);
        }           
        printf("g\n");
    }
}