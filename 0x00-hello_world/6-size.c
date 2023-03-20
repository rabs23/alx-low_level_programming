#include <stdio.h>
/**
 * main - a program that prints various size types on the computer
 *
 * Return: always 0(success)
 */
int main(void)
{
char 1;
int 2;
long int 3;
long long int 4;
float 5;

printf("size of a char; %lu byte(s)\n", (unsigned long)sizeof(1));
printf("size of an int; %lu byte(s)\n", (unsigned long)sizeof(2));
printf("size of a long int; %lu byte(s)\n", (unsigned long)sizeof(3));
printf("size of a long long int; %lu byte(s)", (unsigned long)sizeof(4));
printf("size of a float; %lu byte(s)", (unsigned long)sizeof(5));
return (0);
}


