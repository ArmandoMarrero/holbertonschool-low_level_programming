#include <stdio.h>

int _isupper(int c) {
    if (c >= 'A' && c <= 'Z') {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char testChar = 'H'; 
    if (_isupper(testChar)) {
        printf("%c is an uppercase character.\n", testChar);
    } else {
        printf("%c is not an uppercase character.\n", testChar);
    }
    return 0;
}
