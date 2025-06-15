
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i = 0;
	size_t	s_len;

	if (!s)
		return (NULL);

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (strdup(""));

	if (len > s_len - start)
		len = s_len - start;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
