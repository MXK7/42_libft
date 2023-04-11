int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i] && nb > 0)
	{
		dest[destlen + i] = src[i];
		i++;
		nb--;
	}
	dest[destlen + i] = 0;
	return (dest);
}
