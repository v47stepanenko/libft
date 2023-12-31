#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t i;

    if (src > dst)
    {
        i = 0;
        while (i < n)
        {
            ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        
            i++;
        }
    }
    if (src < dst)
    {
        i = n;
        while (i != 0)
        {
            i--;
            ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        
        }
    }
    return(dst);
}