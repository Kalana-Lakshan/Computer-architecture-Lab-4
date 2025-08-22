#include <stdio.h>

int factorial(int n)
{
    // Your recursive code here
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    { /*return 1 for n = 1 */
        return 1;
    }

    return factorial(n - 1) * n; /*recursive calculation*/
}

int main()
{
    int n;
    // printf("Enter a number: ");
    scanf("%d", &n);
    // Call the factorial function and print the result
    int number = factorial(n);
    printf("%d", number);

    return 0;
}
