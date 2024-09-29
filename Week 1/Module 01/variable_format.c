#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("char: %d bytes, range: [%d, %d]\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("int: %d bytes, range: [%d, %d]\n", sizeof(int), INT_MIN, INT_MAX);
    printf("short: %d bytes, range: [%d, %d]\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("long: %d bytes, range: [%ld, %ld]\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("long long: %d bytes, range: [%lld, %lld]\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("float: %d bytes, range: [%e, %e]\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double: %d bytes, range: [%e, %e]\n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double: %d bytes\n", sizeof(long double));

    return 0;
}

/*
Sure! Here’s a summary of C data types presented in a table format:

| Data Type        | Size (Bytes) | Range (Signed)                       | Range (Unsigned)                | Format Specifier |
|------------------|--------------|--------------------------------------|----------------------------------|-------------------|
#| `char`           | 1            | -128 to 127                          | 0 to 255                         | `%c`              |
| `signed char`    | 1            | -128 to 127                          | N/A                              | `%c`              |
*| `unsigned char`  | 1            | N/A                                  | 0 to 255                         | `%c`              |
#| `short`          | 2            | -32,768 to 32,767                    | 0 to 65,535                      | `%hd`             |
| `signed short`   | 2            | -32,768 to 32,767                    | N/A                              | `%hd`             |
*| `unsigned short` | 2            | N/A                                  | 0 to 65,535                      | `%hu`             |
#| `int`            | 4 (typically) | -2,147,483,648 to 2,147,483,647     | 0 to 4,294,967,295               | `%d` / `%u`       |
| `signed int`     | 4            | -2,147,483,648 to 2,147,483,647     | N/A                               | `%d`              |
*| `unsigned int`   | 4            | N/A                                  | 0 to 4,294,967,295               | `%u`              |
#| `long`           | 4 or 8       | -2,147,483,648 to 2,147,483,647     | 0 to 4,294,967,295 (4 bytes)      | `%ld` / `%lu`     |
| `signed long`    | 4 or 8       | -2,147,483,648 to 2,147,483,647     | N/A                               | `%ld`             |
*| `unsigned long`  | 4 or 8       | N/A                                  | 0 to 4,294,967,295 (4 bytes)     | `%lu`             |
#| `long long`      | 8            | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | 0 to 18,446,744,073,709,551,615 | `%lld` / `%llu`   |
| `signed long long` | 8          | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | N/A | `%lld`           |
*| `unsigned long long` | 8       | N/A                                  | 0 to 18,446,744,073,709,551,615 | `%llu`           |
#| `float`          | 4            | ±1.2E-38 to ±3.4E+38                | N/A                              | `%f`              |
#| `double`         | 8            | ±2.3E-308 to ±1.7E+308              | N/A                              | `%lf`             |
#| `long double`    | 8, 10, or 16 | Implementation-defined               | N/A                              | `%Lf`             |

### Notes:
- Sizes and ranges may vary based on the compiler and architecture.
- Use `sizeof` in C to determine the actual size of each type on your platform.
*/