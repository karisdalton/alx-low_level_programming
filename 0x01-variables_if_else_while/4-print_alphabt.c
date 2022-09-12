#include <stdio.h>

/* print all letters of the alphabet except q and e */
int main(void)
{
	int ch = 'a';
	while(ch <= 'z')
	{
		while(ch != 'q' && ch != 'e')
			putchar(ch);
			ch++;
	}
	return (0);
}
