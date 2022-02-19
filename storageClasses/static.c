#include <stdio.h>

int func()
{
    static int b = 0;
    return b++;
}

int main()
{
    int val = func();
    printf("%d\n", val);
    val = func();
    printf("%d\n", va l);
    val = func();
    printf("%d\n", val);
    val = func();
    printf("%d", val);

    return 0;
}
