#include  <stdio.h>
#include "ft_printf.h"

size_t ft_search_character(const char *str)
{
    size_t count;

    count = 0;
    while (str[count] != '\n' && str[count] != '\0')
    {
        count++;
    }
    return (count);
}
int main ()
{
    char *str = "Hello\nWorld";
    printf("%zu", ft_search_character(str));
}