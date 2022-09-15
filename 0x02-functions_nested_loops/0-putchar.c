#include "main.h"
/**
* main - Entry point
* description: use the _putchar function to print text
* Return: 0 always
*/
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
