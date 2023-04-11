#include<stdlib.h>
#include<stddef.h>

int	ft_strlen(char *str)
{
	int	total;

	total = 0;
	while (str[total])
		total++;
	return (total);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(ft_strlen(src) * sizeof (char));
	i = 0;
	if (!dest)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
