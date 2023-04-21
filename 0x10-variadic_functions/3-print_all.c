#include "variadic_functions.h"
/**
 * print_all - (const char * const format, ...)
 * @format: format
 * Return: void
 */
void print_all(const char * const format, ...)
{
	    va_list args;
    va_start(args, format);

    char c;
    int i;
    float f;
    char* s;
    int len;
    int pos = 0;

    while (format[pos] != '\0') {
        switch (format[pos]) {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char*);
                if (s == NULL) {
                    printf("(nil)");
                } else {
                    len = 0;
                    while (s[len] != '\0') {
                        len++;
                    }
                    printf("%s", s);
                }
                break;
        }
        pos++;
    }

    va_end(args);
    printf("\n");
}
