#include <stdio.h>

int main() {
    int a = 1, b = 2;
    float halbe = (double)a / b;

    printf("%lf\n", halbe);

    a++;
    printf("%d\n", a);

    a--;
    printf("%d\n", a);

    return 0;
}