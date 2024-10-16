#include<stdio.h>

int main() {
    char x;
    scanf("%c", &x);

    // Check if the character is uppercase
    if (x >= 'A' && x <= 'Z') {
        x += 32;  // Convert to lowercase
    }
    // Check if the character is lowercase
    else if (x >= 'a' && x <= 'z') {
        x -= 32;  // Convert to uppercase
    }
    
    printf("%c", x);

    return 0;
}
