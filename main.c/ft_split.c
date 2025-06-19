#include "libft.h"

static size_t	count_word(const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			len++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	tmp;
	size_t	j;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tmp = i;
		while (s[tmp] && s[tmp] != c)
			tmp++;
		if (count_word(s, c) == j)
			break ;
		str[j++] = ft_substr(s, i, tmp - i);
		i = tmp;
	}
	str[j] = 0;
	return (str);
}

#include <stdio.h>
int main()
{
	char **result;
	char *s = "Hello World ! 44";
	char c = ' ';
	result = ft_split(s, c);
	int i;
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}