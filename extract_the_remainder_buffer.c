#include "header.h"

char *extract_the_reaminder_buffer(const char *str)
{
    size_t size;
    size_t count;
    size_t start;
    size_t end;
    char *buffer;

    count = 0;
    while(str[count] != '\n' && str[count] != '\0')
        count++;
    if (!str[count] || !str[count + 1])
    {
        buffer = malloc(1);
        if (!buffer)
            return (NULL);
        buffer[0] = '\0';
    }
    else 
    {
        count++;
        start = count;
        while (str[count] != '\0')
            count++;
        end = count;
        size = end - start;
        buffer = malloc(size + 1);
        if (!buffer)
            return (NULL);
        count = 0;
        while (start < end)
        {
            buffer[count] = str[start];
            start++;
            count++;
        }
        buffer[count] = '\0';
    }
    
    return (buffer);
}
