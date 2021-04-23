#include <cstdio>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x1 = 2; 
    int x2 = 3;
    printf("%d + %d = %d\n", x1, x2, sum(x1, x2));

    return 0;
}