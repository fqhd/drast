#include "stdio.h"
#include "canvas.h"

int main() {

    struct Canvas c;
    c.a = 3.0f;
    c.b = 5.0f;
    c.c = 2.0f;

    printf("Hello, World!\n");
    printf("%f, %f, %f", c.a, c.b, c.c);
    return 0;
}
