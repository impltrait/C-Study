#include <stdio.h>

int fib(int n)
{

    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int rel = fib(n);
    printf("第%d次 的结果是： %d\n", n, rel);
    return 0;
}