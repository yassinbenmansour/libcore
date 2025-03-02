
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}

// int main()
// {
//      int t[4] = { 5, 4, 3, 2};
//      ft_bzero(NULL,6);
//      int i = 0;
//      while(i < 4)
//      printf("%d\n",t[i++]);
// }
