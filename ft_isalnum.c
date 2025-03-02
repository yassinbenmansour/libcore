
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n",ft_isalnum('5'));
    printf("%d\n",ft_isalnum('H'));
    printf("%d\n",ft_isalnum('&'));
    printf("%d\n",ft_isalnum(200));
    printf("%d\n",ft_isalnum(0));
}
*/
