#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return (char*)str;
        str++;
    }
    return NULL;
}

int main () {
   const char str[] = "aba baba";
   const char ch = 'b';
   char *ret;
   char *ret2;

   ret = strchr(str, ch);
   ret2 = ft_strchr(str, ch);
   printf("ORIGINAL : %s\n", ret);
   printf("FT : %s\n", ret2);

   return(0);
}