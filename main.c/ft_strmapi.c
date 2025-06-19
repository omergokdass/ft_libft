#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}

#include <stdio.h>
char	to_uppercase(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32; 
}
int main()
{
	char *s = "absdhabsd";
	char *result = ft_strmapi(s, to_uppercase);
	printf("%s", result);
}
