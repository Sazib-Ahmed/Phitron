#include <stdio.h>

int main() {
    char str[20];

    //scanf("%[^\n]s", str);

    //escape sequence
    char str1[] = "Bangladesh \n\tis a \"beautiful\" country. \0 and ...";

    //just gets and puts is less relaiable better alternative is fgets and fputs.
    fgets(str, sizeof(str), stdin);

    fputs(str1, stdout);



    return 0;
}