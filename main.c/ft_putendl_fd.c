
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int fd = open("text.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putendl_fd("nisantasi unisellsss",fd);
	close(fd);
}
