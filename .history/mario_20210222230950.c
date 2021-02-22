#include <stdio.h>

int main(void)
{
    int height_pyramid, point, point2, i, z;

    height_pyramid = 4;
    point2 = 2;

    for (i = 1; i < height_pyramid; i++)
    {
        printf(" ");
        for (z = 1; z < height_pyramid - i; z++)
        {
            printf("#");
        }
        
    };
}