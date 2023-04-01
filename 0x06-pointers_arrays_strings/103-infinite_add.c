#include "main.h"
/**
 * *infinite_add - (char *n1, char *n2, char *r, int size_r)
 * @n1: first string
 * @n2: second string
 * @r: result
 * @size_r: buffer size
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
    int len2 = strlen(n2);
    int lenr = size_r - 1;  // Leave room for null terminator
    int carry = 0;
    int i, j;

    // Make sure the result buffer is large enough
    if (len1 + len2 > lenr) {
        return 0;
    }

    // Start adding digits from the right
    i = len1 - 1;
    j = len2 - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? n1[i] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        if (sum >= 10) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        r[--lenr] = sum + '0';
        i--;
        j--;
    }

    // Add null terminator and return pointer to result
    r[size_r - 1] = '\0';
    return &r[lenr];
}
