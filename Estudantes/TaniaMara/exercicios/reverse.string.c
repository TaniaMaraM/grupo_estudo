/* Write a program in a programming language of your choice that prompts the user to enter a string.
Accept the string as input.
Reverse the input string.
Print the reversed string to the console.
Input:
Hello World
Output:
dlroW olleH */

#include <unistd.h>

int main (void)
{
    write(1, "dlroW olleH\n", 12);
    return(0);
}