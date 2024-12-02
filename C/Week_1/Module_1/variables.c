#include<stdio.h>

int main(){
    int _int;
    short int _short_int;
    long int _long_int;
    long long int _long_long_int;
    float _float;
    double _double;
    long double _long_double;
    char _char;

    scanf("%d %hd %ld %lld %f %lf %Lf %c", &_int, &_short_int, &_long_int, &_long_long_int, &_float, &_double, &_long_double, &_char );
    printf("int= %04d, \nshort int= %04hd, \nlong int= %04ld, \nlong long int= %04lld, \nfloat= %.2f, \ndouble= %.4lf, \nlong double=%.6Lf, \nchar= %c",_int, _short_int, _long_int, _long_long_int, _float, _double, _long_double, _char);
    
    // getchar(); // consume the leftover newline character
    // scanf("%c", &_char );


    return 0;
}