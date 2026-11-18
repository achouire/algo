#ifndef GET
# define GET

#include <stdio.h>
#include <stdlib.h>

char *extract_the_reaminder_buffer(const char *str);
char *extract_a_line(const char *str);
size_t ft_search_character(const char *str);
char *join_to_buffers(char *s1, char *s2);

#endif