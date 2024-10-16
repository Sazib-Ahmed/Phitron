#include<stdio.h>

int main(){
    int a, b, c;
    char x, y;
    scanf("%d %c %d %c %d", &a, &x, &b, &y, &c);

    if(x=='+'){
        if((a+b)==c){
            printf("Yes");
        }
        else{
            printf("%d", a+b);
        }
    }
    else if(x=='-'){
        if((a-b)==c){
            printf("Yes");
        }
        else{
            printf("%d", a-b);
        }
    }
    else if(x=='*'){
        if((a*b)==c){
            printf("Yes");
        }
        else{
            printf("%d", a*b);
        }
    }

    return 0;
}

/*
#include <stdio.h>

int main() {
    int a, b, c, result = 0;
    char x, y;

    // Input the values
    scanf("%d %c %d %c %d", &a, &x, &b, &y, &c);

    // Perform the operation based on the operator
    if (x == '+') {
        result = a + b;
    } else if (x == '-') {
        result = a - b;
    } else if (x == '*') {
        result = a * b;
    }

    // Check if the result matches c
    if (result == c) {
        printf("Yes");
    } else {
        printf("%d", result);
    }

    return 0;
}

*/