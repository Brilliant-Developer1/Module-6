#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    // printf("%d\n", input);
    int i;

    for (i = 1; i <= input; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        else if (input == 1)
        {
            printf("-1\n");
        }
    }

    return 0;
}