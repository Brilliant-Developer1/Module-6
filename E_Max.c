#include <stdio.h>
#include <limits.h>
int main()
{
    int input, a, max = INT_MIN;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &a);
        if (a > max)
        {
            max = a;
        }
    }
    printf("%d\n", max);

    return 0;
}