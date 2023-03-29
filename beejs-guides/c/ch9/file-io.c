#include <stdio.h>

int main(void)
{
	// reading a char at a time
	FILE *fp;
	int c;
	fp = fopen("ch9/hello.txt", "r");
	while ((c = fgetc(fp)) != EOF){
		printf("%c", c);
	}
	fclose(fp);

	// reading a line at a time
	FILE *fq;
	char s[1024]; // create an array slice big enough for the whole quote
	int linecount = 0;

	fq = fopen("ch9/quote.txt", "r");
	while (fgets(s, sizeof s, fq) != NULL){
		printf("%d: %s", ++linecount, s);
	}
	fclose(fp);
}
