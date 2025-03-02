
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int main()
{
	int	fd;

	fd = open("ft_putendl_fd.txt", O_CREAT | O_RDWR);
	ft_putendl_fd("yassine", fd);
}
*/
