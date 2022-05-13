#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("char : %d\n", sizeof(char));
    printf("unsigned char : %d\n", sizeof(unsigned char));
    printf("signed char : %d\n", sizeof(signed char));

    printf("int : %d\n", sizeof(int));
    printf("unsigned int : %d\n", sizeof(unsigned int));

    printf("short : %d\n", sizeof(short));
    printf("unsigned short : %d\n", sizeof(short));

    printf("long : %d\n", sizeof(long));
    printf("unsigned long : %d\n", sizeof(unsigned long));

    printf("float : %d\n", sizeof(float));
    printf("double : %d\n", sizeof(double));
    printf("long double : %d\n", sizeof(long double));

    return 0;
}