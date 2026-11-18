#include <stdio.h>
#include <stdlib.h>
#include "../../printf/ft_printf.h"

char *extract_a_line(const char *str)
{
    size_t size;
    char *extracted;
    size_t i;

    size = 0;
    while (str[size] != '\n' && str[size] != '\0')
            size++;
    if (str[size])
        size++;
    extracted = malloc(size + 1);
    if (!extracted)
        return (NULL);
    i = 0;
    while(i < size)
    {
        extracted[i] = str[i];
        i++;
    }
    extracted[i] = '\0';
    return (extracted);
}   
int main()
{
    int i = printf ("%s", extract_a_line("Hello\nWorld"));
    printf("%i", i);

}