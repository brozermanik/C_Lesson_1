#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Getting the string with the name and assign it to variable name
    string name = get_string("What is your name?\n");
    //print personalized greetings
    printf("hello, %s\n", name);
}