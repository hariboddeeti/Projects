#include <stdio.h>

struct S {
    int a;
    float b;
};

union U {
    int a;
    float b;
};

int main() {
    struct S s = {10, 3.5f};
    union U u;

    u.a = 10;
    u.b = 3.5f;

    printf("struct: %d %.1f\n", s.a, s.b);
    printf("union: %d %.1f\n", u.a, u.b); // second write overwrites first
    return 0;
}