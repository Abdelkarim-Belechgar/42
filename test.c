#include <unistd.h>

int abss(int x)
{
    if(x<0)
        return -x;
    else 
        return x;
}


int     *ft_rrange(int start, int end)
{
    int i = 0;
int *tab= malloc(sizeof(int)*(abss(end-start)+1));
    if(!tab)
        return NULL;
    while(end>start){
        tab[i] = end;
        end--;
        i++;
    }
    tab[i] = end;
    while(end<start)
    {
        tab[i] = end;
        end++;
        i++;
    }
    tab[i] = end;
    return tab;
}