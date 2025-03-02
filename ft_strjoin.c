
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*str3;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str3 = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!str3)
		return (NULL);
	ft_strlcpy(str3, s1, s1_len + 1);
	ft_strlcat(str3, s2, s1_len + s2_len + 1);
	return (str3);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;
//
// 	s1 = "my favorite thing is ";
// 	s2 = "profile ";
// 	s3 = "DYAL BENMANSOUR";
// 	printf("%s\n",ft_strjoin(ft_strjoin(NULL, NULL), NULL));
// }
