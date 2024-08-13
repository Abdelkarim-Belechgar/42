#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])

    {
        i++;
    }
    return i;
}
char *ft_strdup(char *src)
{
    int i = 0;
    int len = ft_strlen(src);
    char *ptr;
    ptr = malloc(len *sizeof(char) +1);

    while(src[i])
    {
        ptr[i] = src[i];
                i++;
    }
    ptr[i] = '\0';

return ptr;
}
// #include <stdio.h>
// int main()
// {
//     printf("%s", ft_strdup("yassine"));



// }