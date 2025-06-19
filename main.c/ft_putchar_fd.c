#include "libft.h"
#include <fcntl.h>    
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//  int main()
// {
// 	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putchar_fd('o',fd);
// }

