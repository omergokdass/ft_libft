#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
#include <fcntl.h>
#include <unistd.h>
// int main()
// {
// 	int fd = open("abc.txt", O_WRONLY | O_CREAT | O_TRUNC , 0644);
// 	ft_putstr_fd("asdasdasdasd",fd);	
// }
