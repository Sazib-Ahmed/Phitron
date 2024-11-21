#include<stdio.h>

int main(){

    int a,b,x;
    float c,d,y;

    scanf("%d %d\n%f %f", &a, &b, &c, &d);
    
    printf("Integer\n\tNumber 1: %d \n\tNumber 2: %d \nFloat \n\tNumber 3: %.2f \n\tNumber 4: %.2f\n\n", a, b, c, d);
    printf("Sum of number 1 and 2 is: %d \nSum of number 3 and 4 is: %.2f",(a+b),(c+d));
    printf("\nSum of number 1 and 3 is: %.2f\nSum of number 2 and 4 is: %.2f",(a+c),(b+d));
    x=a+c;
    printf("\nSum of a and c, stored in a integer variable: %d",x);

    printf("\n\nSubtraction of number 1 and 2 is: %d \nSubtraction of number 3 and 4 is: %.2f",(a-b),(c-d));
    printf("\nSubtraction of number 1 and 3 is: %.2f\nSubtraction of number 2 and 4 is: %.2f",(a-c),(b-d));
    x=a-c;
    printf("\nSubtraction of a and c, stored in a integer variable: %d",x);




}