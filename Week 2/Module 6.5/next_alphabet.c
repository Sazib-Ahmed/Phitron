#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if(ch=='z'){
        ch-=25;
    }else{
        ch++;
    }

    printf("%c", ch);
}