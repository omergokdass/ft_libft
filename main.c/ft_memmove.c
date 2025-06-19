/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogokdas <ogokdas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:52:54 by ogokdas           #+#    #+#             */
/*   Updated: 2025/06/14 12:00:29 by ogokdas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest || !src)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else if (dest > src)
	{
		while (n--)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}

#include <stdio.h>
int main ()
{
	int buffer[] = {1, 2 ,3 , 4 , 5 , 6 ,7};
	int *asd = ft_memmove(buffer + 2 ,buffer , sizeof(int)*3);
	int i = 0;
	while (i < 7)
	{
		printf("%d\n",buffer[i]);
		i++;
	}
}