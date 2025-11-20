
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Data Type Sizes (in bytes)\n");
    printf("char: %lu bytes\n", sizeof(char));
    printf("int: %lu bytes\n", sizeof(int));
    printf("short: %lu bytes\n", sizeof(short));
    printf("long: %lu bytes\n", sizeof(long));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));
    printf("long double: %lu bytes\n\n", sizeof(long double));

    printf("Data Type Ranges\n");
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("float: %.10e to %.10e\n", FLT_MIN, FLT_MAX);
    printf("double: %.10e to %.10e\n", DBL_MIN, DBL_MAX);
    printf("long double: %.10Le to %.10Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
