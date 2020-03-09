#include <stdio.h>

int main() {
	int quantity = 13;
	int a = 1, b = 1;

	for (int i = 0; i < quantity; i++) {
		printf("%d | ", a);
		b = a + b;
		a = b - a;
	}
	printf("\n");

	return 0;
}

