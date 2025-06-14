
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*temp_big;
	char	*temp_little;
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	temp_big = (char *)big;
	temp_little = (char *)little;
	while (temp_big[i] && i < len)
	{
		j = 0;
		while (temp_big[i + j] == temp_little[j] && (i + j) < len && temp_little[j] != '\0')
		{
			j++;
		}
		if (temp_little[j] == '\0')
			return (temp_big + i);
		i++;
	}
	return (NULL);
}
