
#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	result;
	int					sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result >= 9223372036854775807 && sign == 1)
			return (-1);
		if (result > 9223372036854775807 && sign == -1)
			return (0);
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	// Cas normaux
//     printf("Cas normaux :\n");
//     printf("ft_atoi(\"123\") = %d\n", ft_atoi("123"));
//     printf("ft_atoi(\" 456\") = %d\n", ft_atoi(" 456"));
//     printf("ft_atoi(\"-789\") = %d\n", ft_atoi("-789"));
//     printf("ft_atoi(\"0\") = %d\n\n", ft_atoi("0"));

//     // Cas avec espaces et signes
//     printf("Cas avec espaces et signes :\n");
//     printf("ft_atoi(\"   +42\") = %d\n", ft_atoi("   +42"));
//     printf("ft_atoi(\"   -42\") = %d\n", ft_atoi("   -42"));
//     printf("ft_atoi(\" +00042\") = %d\n\n", ft_atoi(" +00042"));

//     // Dépassements de limites
//     printf("Dépassements de limites :\n");
//     printf("ft_atoi(\"-2147483649\") = %d\n", ft_atoi("-2147483649"));
//     printf("ft_atoi(\"2147483648\") = %d\n", ft_atoi("2147483648"));
//     printf("ft_atoi(\"-999999999999\") = %d\n", ft_atoi("-999999999999"));
//     printf("ft_atoi(\"999999999999\") = %d\n\n", ft_atoi("999999999999"));

//     // Valeurs non numériques
//     printf("Valeurs non numériques :\n");
//     printf("ft_atoi(\"42abc\") = %d\n", ft_atoi("42abc"));
//     printf("ft_atoi(\"abc42\") = %d\n\n", ft_atoi("abc42"));

//     // Chaînes vides et sans chiffres
//     printf("Chaînes vides et sans chiffres :\n");
//     printf("ft_atoi(\"\") = %d\n", ft_atoi(""));
//     printf("ft_atoi(\"   \") = %d\n", ft_atoi("   "));
//     printf("ft_atoi(\"abc\") = %d\n", ft_atoi("abc"));
// 	return 0;
// }
