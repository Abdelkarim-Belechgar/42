#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
char *copy(char *dst, char *src, int len)
{
    int i = 0;
    while( i <len)
    {   
        dst[i] = src[i];
        i++;
    }
    dst[i] ='\0';
    return dst;

}


int ft_count(char *str)
{
    int i =0 ;
    int count  = 0;
    while(str[i])
{
    while(str[i] == ' ' || str[i] == '\t')
        i++;
    if(str[i])
        count++;
    while(str[i] && str[i] != ' ' && str[i] != '\t')
        i++;
}
return count;
}
char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int count  = ft_count(str);
    int len = 0;
    char **ptr = malloc(sizeof(char*) *count+1);
    if(!ptr)
        return NULL;
    
    while(str[i])
    {
        while(str[i] && str[i] == ' ' ||str[i] == '\t')
            i++;
        j = i;
        while(str[i] && str[i]!= ' ' && str[i]!= '\t')
            i++;

        if(i>j)
        {
            ptr[len] = malloc(sizeof(char) * i-j+1);
            if(!ptr)
                return NULL;

                    copy(ptr[len], &str[j], i - j);

        len++;
        }


    }
            ptr[len] = NULL;
            return ptr;

}
void ft_putstr(char *str)
{
    int i = 0;
    while( str[i])
    {
        write(1,&str[i],1);
        i++;

    }


}
int main(int argc , char **argv)
{
    int i = 1;
    if(argc > 1)

    {
      char **ptr = ft_split(argv[1]);
                // while(ptr[i])
                // {
                //         printf("%s",ptr[i]);
                //         i++;

                // }
   
            while(ptr[i])
            {
                    ft_putstr(ptr[i]);
                    write(1," ",1);
                i++;
            }
            ft_putstr(ptr[0]);


    }

write(1,"\n",1);

}