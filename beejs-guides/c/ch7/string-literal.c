#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "Hello, world!";

	for (int i = 0; i < 13; i++)
	{
		printf("%c\n", s[i]);
	}

	printf("The string is %zu bytes long.\n", strlen(s));
}
