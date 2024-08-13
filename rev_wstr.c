#include <unistd.h>
#include <stdlib.h>


char *copy(char *dst, char *src , int len)
{
    int i = 0;
    while( i <len)
    {
        dst[i] =src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}
int ft_count(char *str)
{
    int i = 0;
    int count= 0;
    while(str[i])
    {
        while(str[i] == '\t' || str[i]== ' ' || str[i] == '\n')
            i++;
        if(str[i])
            count++;
        
while(str[i]!=' ' && str[i]!='\t' && str[i])
                i++;
    }
return count;

}



char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int len  = 0;
    int count = ft_count(str);
    char **ptr = malloc(sizeof(char*) * count+1);
    if(!ptr)
        return NULL;
    while(str[i])
    {
        while(str[i]&& str[i] == ' ' || str[i] == '\t' )
            i++;
            j = i;
        while(str[i] && str[i]!=' ' && str[i]!= '\t')
            i++;
    
    if(i >j)
    {
            ptr[len] = (char*)malloc((i-j+1) *sizeof(char));
                if(!ptr)
                    return NULL;
        copy(ptr[len] , &str[j], i-j);
            len++;


    }
    }

    ptr[len] = NULL;
    return ptr;


}
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i]!= '\0')
{
    write(1,&str[i],1);
    i++;

}


}
#include <stdio.h>
int main(int argc , char **argv)
{
if(argc  == 2)
{   
    int i = 0;
    char **ptr = ft_split(argv[1]);
    while(ptr[i]!=0)
            i++;
            i--;
    while( i>=0)
    {
            ft_putstr(ptr[i]);
            if(i >0)
                write(1, " ", 1);
            i--;
    }


}

write(1,"\n",1);
}