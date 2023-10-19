#include <stdio.h>

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1; // Character is uppercase
    } else {
        return 0; // Character is not uppercase
    }
}

int main() {
    char testChar = 'H'; // You can change this character to test different cases
    if (_isupper(testChar)) {
        printf("%c is an uppercase character.\n", testChar);
    } else {
        printf("%c is not an uppercase character.\n", testChar);
    }
    return 0;
}
