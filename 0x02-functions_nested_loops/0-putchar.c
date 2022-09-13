#include "main.h"
/**
 * main - Print "Main" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char main[] = "Main";
	int i = 0;

	while(main [i] !='\0')
	{
		_putcher(holberton[i]);
		i++;
	}
	_putchar('\n');

	return (0);

}
