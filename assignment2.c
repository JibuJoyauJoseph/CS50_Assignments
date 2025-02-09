#include <stdio.h>
#include <string.h>

// Function to convert a single hexadecimal digit to its binary equivalent
void hexDigitToBinary(char hexDigit, char *binary) {
    switch (hexDigit) {
        case '0': strcpy(binary, "0000"); break;
        case '1': strcpy(binary, "0001"); break;
        case '2': strcpy(binary, "0010"); break;
        case '3': strcpy(binary, "0011"); break;
        case '4': strcpy(binary, "0100"); break;
        case '5': strcpy(binary, "0101"); break;
        case '6': strcpy(binary, "0110"); break;
        case '7': strcpy(binary, "0111"); break;
        case '8': strcpy(binary, "1000"); break;
        case '9': strcpy(binary, "1001"); break;
        case 'A': case 'a': strcpy(binary, "1010"); break;
        case 'B': case 'b': strcpy(binary, "1011"); break;
        case 'C': case 'c': strcpy(binary, "1100"); break;
        case 'D': case 'd': strcpy(binary, "1101"); break;
        case 'E': case 'e': strcpy(binary, "1110"); break;
        case 'F': case 'f': strcpy(binary, "1111"); break;
        default: strcpy(binary, "Invalid"); break;
    }
}

int main() {
    char hexNumber[100];
    char binaryNumber[400] = ""; // Each hex digit converts to 4 binary digits
    char binaryDigit[5]; // Temporary storage for each binary digit

    // Input hexadecimal number
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexNumber);

    // Convert each hexadecimal digit to binary
    for (int i = 0; i < strlen(hexNumber); i++) {
        hexDigitToBinary(hexNumber[i], binaryDigit);
        if (strcmp(binaryDigit, "Invalid") == 0) {
            printf("Invalid hexadecimal digit: %c\n", hexNumber[i]);
            return 1; // Exit the program with an error code
        }
        strcat(binaryNumber, binaryDigit);
    }

    // Output the binary equivalent
    printf("The binary equivalent of %s is %s\n", hexNumber, binaryNumber);

    return 0;
}
