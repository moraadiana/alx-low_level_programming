#include <stdio.h>

int main(void)
{
    int count;
    unsigned int first = 1;
    unsigned int second = 2;
    unsigned int next;

    printf("%u, %u, ", first, second); // Print the first two Fibonacci numbers

    for (count = 3; count <= 98; count++) {
        next = first + second;
        printf("%u", next);

        if (count != 98) {
            printf(", ");
        }

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

