#include "main.h"
/**
 * *cap_string - *string_toupper
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
        char *p = str;

        while (*p)
        {
                if (*p >= 'a' && *p <= 'z')
                        *p = *p - ('a' - 'A');
                p++;
        }
        return (str);
}
