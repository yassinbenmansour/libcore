
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	x;

	if (dst_size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_size <= dst_len)
		return (src_len + dst_size);
	i = dst_len;
	x = 0;
	while (src[x] != '\0' && i < dst_size - 1)
	{
		dst[i] = src[x];
		x++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
// #include <stdio.h>
//
// int main()
// {
// 	    char s1[30] = "Dans cette premiere partie";
//         char s2[10] = "lazy0ben";
//         printf("len s1 %ld\n", ft_strlen(s1));
//         printf("len s2 %ld\n", ft_strlen(s2));
//         printf("%zu\n", ft_strlcat(s2, s1, 7));
// }
//
