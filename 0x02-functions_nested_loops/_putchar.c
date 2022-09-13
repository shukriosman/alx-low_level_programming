#incluse <unistd.h>

/**
 *_putcher - writes the character c to stdout
 *@c: The character to print
 *
 *Return: on sucess 1.
 *On error, -1 is returned, and error is set appropriately.
 */
int_putchar(char c)
{
	return (write(1 ,&c, 1));
}
