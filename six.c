#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("int literal %d\n", 100);
    printf("float literal : %f\n", 1.1);
    printf("char literal : %f\n", 'a');
    printf("string literal : %s\n", "Helo");

    char a1;
    int a2;
    float a3;

    printf("===== before assigment =====\n");
    printf("a1 : %c\n", a1);
    printf("a2 : %d\n", a2);
    printf("a3 : %f\n", a3);

    a1 = 'a';
    a2 = 100;
    a3 = 1.1111;

    printf("===== after assigment =====\n");
    printf("a1 : %c\n", a1);
    printf("a2 : %d\n", a2);
    printf("a3 : %f\n", a3);

    char a4 = 'c';
    int a5 = 200;
    float a6 = 22.22;
    printf("\n a4 : %c\n", a4);
    printf("a5 : %d\n", a5);
    printf("a6 : %f\n", a6);

    int a7, a8 ,a9;
    a7 = 300;
    a8 = 400;
    a9 = 500;
    printf("\n a7 : %d\n", a7);
    printf("a8 : %d\n", a8);
    printf("a9 : %d\n", a9);

    int a10     = 600,
        a11     = 700,
        a12     = 800;

    printf("\n a10 : %d\n", a10);
    printf("a11 : %d\n", a11);
    printf("a12 : %d\n", a12);

    return 0;
}