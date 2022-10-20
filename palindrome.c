#include <stdio.h>
int main()
{
    int n, r, sum = 0, dup;
    printf("enter the number=");
    scanf("%d", &n);
    dup = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (dup == sum)
        printf("palindrome number ");
    else
        printf("not palindrome");
    return 0;
}