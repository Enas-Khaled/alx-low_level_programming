#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entery point
 * Return: void
 */
int main(void)
{
    const char *const valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;
    char password[7];
    srand(time(NULL));
    
    printf("Generating random passwords for 101-crackme...\n");
    
    for (i = 0; i < 10; i++) {
        int j;
        for (j = 0; j < 6; j++) {
            int r = rand() % 62;
            password[j] = valid_chars[r];
        }
        password[6] = '\0';
        printf("Password %d: %s\n", i+1, password);
    }
    return 0;
}
