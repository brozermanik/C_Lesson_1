#include <stdio.h>
#include <math.h>

int main(void)
{
int n,start_size,end_size,y;

start_size = 120;
end_size = 1000;
n = (start_size / 3) - (start_size / 4);
y = (end_size-start_size) / n;

printf("Ns: %i\n", n);
printf("Years: %i\n", y);

}