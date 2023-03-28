#include <stdio.h>
#include <string.h>

int my_strlen(char *s)
{
	int count = 0;
	while (s[count] != '\0')
		count++;
	return count;
}

int main(void)
{
	char greeting[] = "Hello, world!";

	printf("The greeting is is %d bytes long.\n", my_strlen(greeting));
}
