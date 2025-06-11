/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogokdas <ogokdas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:24:35 by ogokdas           #+#    #+#             */
/*   Updated: 2025/06/11 19:31:53 by ogokdas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
#include <stdio.h>
#include <string.h>  // Sadece karşılaştırma için
#include "libft.h"

int main(void)
{
	char buffer1[20] = "Merhaba, dünya!";
	char buffer2[20] = "Merhaba, dünya!";

	// ÇAKIŞMAYAN bölgelerle örnek
	ft_memmove(buffer1 + 8, buffer1, 7); // "Merhaba" kelimesini sona kopyalaü
	printf("ft_memmove sonucu (çakışmayan): %s\n", buffer1);

	// Aynı işlemi standart memmove ile karşılaştıralım
	memmove(buffer2 + 8, buffer2, 7);
	printf("memmove sonucu (çakışmayan):     %s\n", buffer2);

	// ÇAKIŞAN bölgelerle örnek
	char buffer3[20] = "1234567890";
	ft_memmove(buffer3 + 2, buffer3, 8);  // Örtüşen alanlarda güvenli kopyalama
	printf("ft_memmove sonucu (çakışan):     %s\n", buffer3);

	return (0);
}

