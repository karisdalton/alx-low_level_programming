#include <stdio.h>

/* print alphabet in lowercase*/
int main(void)
{
	for(int x = 'A'; x <= 'z'; x++)
	{
		putchar(toLower(x));
	}
	return (0);
}
