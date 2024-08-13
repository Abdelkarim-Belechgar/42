#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i]){
	write(1,&str[i],1);
		i++;
	}
}
int ft_count(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return count;
}
char *copy(char *dst, char *src, int len)
{
	int i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}
char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int len = 0;
	int count = ft_count(str);
	char **ptr = (char **)malloc(sizeof(char**) * (count + 1));
	if (!ptr)
		return NULL;
	while (str[i])
	{	
		while (str[i] && str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
		j = i;
		while (str[i] && str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
				i++;
			if (i > j)
			{
				ptr[len] = (char *)malloc(sizeof(char *) * (i - j + 1));
				if (!ptr)
					return NULL;
				copy(ptr[len],&str[j],i-j);
					len++;
			}
	}
		ptr[len] = NULL;
		return ptr;
}
int main(int argc , char **argv)
{
if(argc == 2)
{	
	int i = 1;
	



}
	write(1,"\n",1);
}