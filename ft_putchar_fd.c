
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>

int main()
{
	int fd;
    fd = open("ft_putchar_fd.txt" , O_RDWR);
    ft_putchar_fd('a', fd);
}
*/
