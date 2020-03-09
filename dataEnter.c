#include <stdio.h>

int main() {
	char name[30];
	int age;
	float height, weight;
	int boolTemp;
	_Bool isMarried;

	printf("Please, enter your name (30 characters maximum): \n");
	scanf("%s", name);

	printf("%s, how old are you?\n", name);
	scanf("%d", &age);

	printf("What height?\n");
	scanf("%f", &height);

	printf("What weight?\n");
	scanf("%f", &weight);

	if (age < 18) {
		isMarried = 0;
		printf("You are still young, it's was last question.\n");
	} else {
		printf("%s, are you married ('1' for yes, '0' for not)?\n", name);
		scanf("%d", &boolTemp);
		isMarried = boolTemp;
	}

	printf("\nThis is your portfolio:\n___________________________\n\n");
	printf("Your name is: %s\n", name);
	printf("Your age is: %d\n", age);
	printf("Your height is: %.2f\n", height);
	printf("Your weight is: %.2f\n", weight);

	if (isMarried) {
		printf("You're married.\n");
	} else {
		printf("You aren't married.\n");
	}

	return 0;
}

