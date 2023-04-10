#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= 12; i++)
    {
        int mult = input * i;
        printf("%d * %d = %d\n", input, i, mult);
    }

    return 0;
}