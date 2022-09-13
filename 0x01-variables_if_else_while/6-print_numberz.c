#include <stdio.h>

/**
 *
 *  * main - main block
 *
 *   * Description: Print all possible combinations of two digits.
 *
 *    * 01 and 10 are considered as the same combination of the two digits.
 *
 *     * Print only the smallest combination of two digits.
 *
 *      * Return: 0
 *
 *       */

int main(void)
{
	int i, p, q;

	i = 0;
	while (i < 100)
	{
		p = i % 10; /* singles digit */
		q = i / 10; /* doubles digit */

		if (q < p)
		{
			putchar(q + '0');
			putchar(p + '0');

		if (i < 89)
		{
			putchar(44)
			putchar(32);
		}
		}

		i++;
	}
	putchar('\n');
	return (0);
}
