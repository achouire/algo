#include <stdio.h>
#include <stdlib.h>

char *extract_the_reaminder_buffer(const char *str)
{
    size_t size;
    size_t count;
    size_t remainder;
    char *buffer;
    size_t start;

    count = 0;
    while(str[count] != '\n' && str[count] != '\0')
        count++;
    if (!str[count])
    {
        buffer = malloc(1);
        if (!buffer)
            return (NULL);
        buffer[0] = '\0';
    }
    else 
    {
        if (str[count + 1])
            count++;
        start = count;
        size = 0;
        while (str[count] != '\n' && str[count] != '\0')
        {
            size++;
            count++;
        }
        if (str[count])
            size++;
        buffer = malloc(size + 1);
        if (!buffer)
            return (NULL);
        count = 0;
        while (count < size)
        {
            buffer[count] = str[start];
            start++;
            count++;
        }
        buffer[count] = '\0';
    }
    return (buffer);
}
int main()
{
    printf("%s", extract_the_reaminder_buffer("Hello\nWorld1337"));
}