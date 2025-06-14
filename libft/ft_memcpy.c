#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d;
    const char *s;

    i = 0;
    d = (char *)dest;
    s = (const char *)src;
    if(!dest || !src)
        return(NULL);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
