#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strrchr(const char *str, int c)
{
    const char*     i;

    i = str + ft_strlen(str);
    while (str <= i)
    {
        if (*i == (char)c)
            return (char*)i;
        i--;
    }
    return NULL;
}

int main() {
    char str[] = "hello world";
    char* p1 = ft_strrchr(str, 'l');
    char* p2 = strrchr(str, 'l');
    printf("ft_strrchr: %s\n", p1);   // affiche "llo world"
    printf("strrchr: %s\n", p2);  // affiche "ld"
    return 0;
}