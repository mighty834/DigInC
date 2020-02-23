#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Quantity of args: %i\n", argc - 1);

    for (int i = 1; i < argc; i++) {
        printf("Hello %s!\n", argv[i]);
    }

    return 0;
}

