#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
	int i;
	int first_word;

	i = 0;
	first_word = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (first_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if ((str[i] >= 'A' && str[i] <= 'Z')
	           ||(str[i] >= 'a' && str[i] <= 'z')
		   ||(str[i] >= '0' && str[i] <= '9'))
			first_word = 0;
		else
			first_word = 1;
		i++;
	}
	return (str);
}
