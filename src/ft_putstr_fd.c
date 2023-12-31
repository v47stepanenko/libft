#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{	
	if (s == NULL)
		return;

	while (*s != '\0') 
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
	
	ft_putchar('\n');
}
