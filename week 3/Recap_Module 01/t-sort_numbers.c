#include<stdio.h>

int main() {
    int a, b, c, first, second, third;    
    scanf("%d %d %d", &a, &b, &c);
    first = a;
    second = b;
    third = c;

    // Sorting using basic comparisons and swaps
    if (a > b) {
        int temp = a; 
        a = b; 
        b = temp;
    }
    if (a > c) {
        int temp = a; 
        a = c; 
        c = temp;
    }
    if (b > c) {
        int temp = b; 
        b = c; 
        c = temp;
    }

    // Print the sorted numbers
    printf("%d\n%d\n%d\n\n%d\n%d\n%d", a, b, c, first, second, third);

    return 0;
}



/*
#include<stdio.h>

int main(){
    int a, b, c, first, second, third;
    scanf("%d %d %d", &a, &b, &c);

    if(a<=b && a<=c){
        first=a;
        if(b<=c){
            second=b;
            third=c;
        }
        else{
            second=c;
            third=b;
        }
    }
    else if(b<=c && b<=a){
        first=b;
        if(c<=a){
            second=c;
            third=a;
        }
        else{
            second=a;
            third=c;
        }
    }
    else if(c<=a && c<=b){
        first=c;
        if(a<=b){
            second=a;
            third=b;
        }
        else{
            second=b;
            third=a;
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d", first, second, third, a, b, c);

    return 0;
}

*/