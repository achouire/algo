#include "header.h"

char *join_to_buffers(char *s1, char *s2)
{
    size_t count;
    size_t size;
    char *join_buffer;
    size_t f;
    
    f = 0;
    count = 0;
    while(s1[count])
        count++;
    size = count;
    count = 0;
    while (s2[count])
        count++;
    size += count;
    join_buffer = malloc(size + 1);
    if (!join_buffer)
        return (NULL);
    count = 0;
    while (s1[count])
    {
        join_buffer[f] = s1[count];
        count++;
        f++;
    }
    count = 0;
    while (s2[count])
    {
        join_buffer[f] = s2[count];
        count++;
        f++;
    }
    join_buffer[f] = '\0';
    return (join_buffer);
}
int main()
{
    printf("%s", join_to_buffers("ABC", "DEF\nGHI")); 
}