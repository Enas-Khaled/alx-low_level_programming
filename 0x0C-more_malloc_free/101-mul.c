#include "main.h"

/* Function to check if a string only contains digits */
int is_digit_string(char *s) {
    while (*s != '\0') {
        if (*s < '0' || *s > '9') {
            return 0;
        }
        s++;
    }
    return 1;
}

/* Function to multiply two strings representing positive integers */
char *multiply(char *s1, char *s2) {
    int len1 = 0, len2 = 0, i, j;
    char *result, *p;

    /* Determine the lengths of the input strings */
    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }

    /* Allocate memory for the result string */
    result = malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    /* Initialize the result string to '0' */
    for (i = 0; i < len1 + len2; i++) {
        result[i] = '0';
    }
    result[len1 + len2] = '\0';

    /* Perform multiplication digit by digit */
    for (i = len1 - 1; i >= 0; i--) {
        int carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            int prod = (s1[i] - '0') * (s2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = prod / 10;
            result[i + j + 1] = (prod % 10) + '0';
        }
        result[i] += carry;
    }

    /* Trim leading zeros */
    p = result;
    while (*p == '0' && *(p + 1) != '\0') {
        p++;
    }

    /* Return the result */
    return p;
}

int main(int argc, char **argv) {
    char *result;

    /* Check for the correct number of arguments */
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    /* Check that the input strings only contain digits */
    if (!is_digit_string(argv[1]) || !is_digit_string(argv[2])) {
        printf("Error\n");
        return 98;
    }

    /* Multiply the input strings and print the result */
    result = multiply(argv[1], argv[2]);
    if (result == NULL) {
        printf("Error\n");
        return 98;
    }
    printf("%s\n", result);

    /* Free the memory used by the result string */
    free(result);

    /* Exit with success */
    return 0;
}

