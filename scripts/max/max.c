#include <unistd.h>
#include <stdio.h>

int             max(int* tab, unsigned int len)
{
    int max;
    unsigned int  i = 0;
    max = tab[i];
    while(i <=len)
    {
        if(max<tab[i])
            max = tab [i];

            i++;

    }

    return max;

}
// int main()
// {

//     int tab[7] = {1,2000,5,4,8,7,88};
//     printf("%d", max(tab,7));



// }