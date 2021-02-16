#include <stdio.h>

int main(void)
{
    //Getting the string with the name and assign it to variable name
    string nameS = GetString("What is your name?\n");
    //print personalized greetings
    printf("hello, %s\n", nameS);
}