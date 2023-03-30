#include "main.h"
#include <ctype.h>
/**
 * *cap_string - *string_toupper
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	char* p = str;
    int capitalize_next = 1;

    while (*p) {
        if (isspace(*p) || ispunct(*p)) {
            capitalize_next = 1;
        }
        else {
            if (capitalize_next) {
                *p = toupper(*p);
                capitalize_next = 0;
            }
        }
        p++;
    }
    return str;
}
