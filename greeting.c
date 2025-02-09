#include <stdio.h>

int main() {
    char name[50];

    // Ask the user for their name
    printf("Enter your name: ");
    scanf("%s", name);

    // Greet the user
    printf("Hello, %s! Welcome to the program.\n", name);

    return 0;
}
