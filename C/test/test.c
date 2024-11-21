#include <stdio.h>
#include <string.h>

void LetterChanges(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++ ) {
        // Shift lowercase letters
        if (str[i] >= 'a' && str[i] <= 'y') {
            str[i] = str[i] + 1;
        } else if (str[i] == 'z') {
            str[i] = 'a';
        }
        // Shift uppercase letters
        else if (str[i] >= 'A' && str[i] <= 'Y') {
            str[i] = str[i] + 1;
        } else if (str[i] == 'Z') {
            str[i] = 'A';
        }
    }
    printf("%s", str);
}

int main(void) { 
    char str[500];
    // Read the entire line of input, with a buffer size limit
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    LetterChanges(str);
    return 0;
}
