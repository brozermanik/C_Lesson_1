#include <stdio.h>
#include <math.h>

int main(void)
{
int n,start_size,end_size;

start_size = 12;
end_size = 16;
n = (start_size%3) - (start_size%4);

printf("Years: %i\n", n);

}