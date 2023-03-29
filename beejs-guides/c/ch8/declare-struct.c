#include <stdio.h>

struct car {
	char *name;
	float price;
	int speed;
};

int main(void)
{
	struct car saturn = {"Saturn SL/2", 16000.99, 175}; // with struct initializer
//	struct car saturn; // without struct initializer
//	saturn.name = "Saturn SL/2";
//	saturn.price = 15999.99;
//	saturn.speed = 175;

	printf("Name:  %s\n", saturn.name);
	printf("Price (USD): %f\n", saturn.price);
	printf("Top Speed (km): %d\n", saturn.speed);
}
