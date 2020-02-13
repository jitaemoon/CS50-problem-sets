#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for input
	string name = get_string("What is your name?\n");
	// Print hello, {name}
    printf("hello, %s\n", name);
}
