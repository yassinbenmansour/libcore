
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
#include <fcntl.h>

int main()
{
	int	fd;

	fd = open("ft_putstr_fd.txt", O_CREAT | O_RDWR);
	ft_putstr_fd("lazy0ben" "NADY" "BZAF", fd);
}
*/
