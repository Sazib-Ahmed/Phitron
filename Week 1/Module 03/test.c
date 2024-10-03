#include <stdio.h>
int main()
{
    int _int_a;
    char _char_b;
    printf("Enter a interger and a character seperated by space: ");
    scanf("%d %c",&_int_a, &_char_b);

    printf("\n\nSwitch case 1:\n\t");
    switch(_int_a)
    {
        case 1:
            printf("Inside case 1");
            break;
        case 2:
            printf("Inside case 2");
            break;
        case 3:
            printf("Inside case 3");
            break;
        case 4:
            printf("Inside case 4");
            break;
        case 5:
            printf("Inside case 5");
            break;
        default:
            printf("Inside default: You did not entered number between 1 to 5.");
    }

    printf("\n\nSwitch case 2:\n\t");
    switch(_char_b)
    {
        case 'a':
            printf("Inside case a");
            break;
        case 'b':
            printf("Inside case b");
            break;
        case 'c':
            printf("Inside case c");
            break;
        case 'd':
            printf("Inside case d");
            break;
        case 'e':
            printf("Inside case e");
            break;
        default:
            printf("Inside default: You did not entered character between a to e.");
    }


    return 0;
}