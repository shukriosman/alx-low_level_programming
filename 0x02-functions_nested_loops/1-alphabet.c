#include "main.h"
/**
 *  print_alphabet - Print alphabet in lowercase using only `_putchar`
 *  Return: 0
 */
void print_alphabet(main)
{
	char c = 'a';

	while (c <= 'z')
	{
	        print_alphabet(main);
		c++;
	}
	    print_alphabet(main);
}
