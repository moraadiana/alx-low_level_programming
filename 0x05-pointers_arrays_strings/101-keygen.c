#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

int main(void)
{
    char password[PASSWORD_LENGTH];
    int i, ascii;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH - 1; i++)
    {
        ascii = rand() % 94 + 33; // Generate ASCII values from 33 to 126 (printable characters)
        password[i] = (char)ascii;
    }

    password[PASSWORD_LENGTH - 1] = '\0'; // Add null terminator

    printf("%s\n", password);

    return 0;
}

