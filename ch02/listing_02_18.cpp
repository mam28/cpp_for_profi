// Программа, использующая объединение

#include <cstdio>

union Variant {
    char string[10];
    int integer;
    double floating_point;
};

int main()
{
    Variant v;

    v.integer = 42;
    printf("The ultimate answer: %d\n", v.integer);

    v.floating_point = 2.7182818284;
    printf("Euler's namber e: %f\n", v.floating_point);
    printf("A dampster fire: %d\n", v.integer);

    return 0;
}