#include<stdio.h>

int main() {
    int a, b;
    char x;

    // Input values
    scanf("%d %c %d", &a, &x, &b);

    // Check the operator and compare accordingly
    if (x == '<' && a < b) {
        printf("Right");
    } 
    else if (x == '>' && a > b) {
        printf("Right");
    } 
    else if (x == '=' && a == b) { 
        printf("Right");
    } 
    else {
        printf("Wrong");
    }

    return 0;
}
