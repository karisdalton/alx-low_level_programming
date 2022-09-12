#include <stdio.h>

/*print alphabet both in uppercase and lowercase */
int main(void)
{
	for(int ch = 'a'; ch <= 'z', ch++)
	{
		putchar(ch);
		for(int ch = 'A'; ch <= 'Z'; ch++)
		{
			putchar(ch);
			getch();
		}
	}
	return (0);
}
