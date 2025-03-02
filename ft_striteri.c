
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	index;

	index = -1;
	if (!s || !f)
		return ;
	while (s[++index] != '\0')
		(*f)(index, &s[index]);
}

// void f1(unsigned int index, char *c)
// {
//     *c = *c + 1;
// }

// int main()
// {
//     char str[] = "abcd";
//     ft_striteri(str, f1);
//     printf("%s\n", str);
//     return 0;
// }
