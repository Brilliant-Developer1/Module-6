#include <stdio.h>
#include <limits.h>
int main()
{
    int input, a, min = INT_MAX;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }
    }
    printf("%d\n", min);

    return 0;
}