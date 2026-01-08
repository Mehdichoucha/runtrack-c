#include <io.h>

void my_putchar(char c)
{
    _write(1, &c, 1);
}