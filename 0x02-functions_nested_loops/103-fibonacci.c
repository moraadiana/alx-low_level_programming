#include <stdio.h>

int main(void)
{
    int previous = 1;
    int current = 2;
    int next;
    int sum = 2; // Start with sum = 2 since 2 is the first even-valued term

    while (current <= 4000000) {
        next = previous + current;
        if (next % 2 == 0) {
            sum += next;
        }
        previous = current;
        current = next;
    }

    printf("%d\n", sum);

    return 0;
}

