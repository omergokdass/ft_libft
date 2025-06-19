#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

#include <stdio.h>

void upper(unsigned int, char *c)
{
	if ( *c >= 'a' && *c <= 'z')
		*c -= 32;
}
int main()
{
	char s[] = "omerfokasd";
	ft_striteri(s, upper);
	printf("%s\n",s);
}