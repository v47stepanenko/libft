#include "libft.h"

size_t ft_strlen(char const *str)
{
    size_t i = 0;
    
    while(str[i])
        i++;
        
    return(i);
    

}