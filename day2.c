#include <stdio.h>

main()
{
    int a, b;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("sum=%d, diff=%d, product=%d, quotient=%d\n", a + b, a - b, a * b, a / b);
}
